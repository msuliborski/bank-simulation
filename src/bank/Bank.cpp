
#include "Bank.h"
#include "StudentsAccount.h"
#include "JuniorAccount.h"
#include "PersonalAccount.h"
#include <fstream>
#include <iostream>

using namespace std;

Bank::Bank(double money) {
    this->money = money;
    restoreAccountState();
}



shared_ptr<Bank> Bank::instance = nullptr;

shared_ptr<Bank> Bank::GetInstance(double money) {
    if (instance == nullptr){
        shared_ptr<Bank> bank(new Bank(money));
        Bank::instance = bank;
    }
    return instance;
}

void Bank::saveAccountState() {
    ofstream outputFile("account-data.txt", ios::trunc);

    for (int i = 0; i < this->accounts.size(); i++){
        outputFile  << this->accounts[i]->getAccountType() << ":"
                    << this->accounts[i]->getNumber() << ":"
                    << this->accounts[i]->getLogin() << ":"
                    << this->accounts[i]->getPassword() << ":"
                    << this->accounts[i]->getBalance() << endl;
    }
    outputFile.close();
}

void Bank::restoreAccountState() {
    ifstream inputFile;
    inputFile.open("account-data.txt", ios::out);


    string accountLine;
    while(getline(inputFile, accountLine)) {

        int lineCharIterator = 0;
        string type, number, login, password, balance;

        while (lineCharIterator < accountLine.length()) {
            type += accountLine[lineCharIterator];
            lineCharIterator++;
            if ((char) accountLine[lineCharIterator] == ':') { lineCharIterator++; break; }
        }

        while (lineCharIterator < accountLine.length()) {
            number += accountLine[lineCharIterator];
            lineCharIterator++;
            if ((char) accountLine[lineCharIterator] == ':') { lineCharIterator++; break; }
        }

        while (lineCharIterator < accountLine.length()) {
            login += accountLine[lineCharIterator];
            lineCharIterator++;
            if ((char) accountLine[lineCharIterator] == ':') { lineCharIterator++; break; }
        }

        while (lineCharIterator < accountLine.length()) {
            password += accountLine[lineCharIterator];
            lineCharIterator++;
            if ((char) accountLine[lineCharIterator] == ':') { lineCharIterator++; break; }
        }

        while (lineCharIterator < accountLine.length()) {
            balance += accountLine[lineCharIterator];
            lineCharIterator++;
            if ((char) accountLine[lineCharIterator] == ':') break;
        }

        shared_ptr<Account> account;
        if (type == "student") account = shared_ptr<Account>(new StudentsAccount(atoi(number.c_str()), login, password, atof(balance.c_str())));
        else if (type == "junior") account = shared_ptr<Account>(new JuniorAccount(atoi(number.c_str()), login, password, atof(balance.c_str())));
        else if (type == "personal") account = shared_ptr<Account>(new PersonalAccount(atoi(number.c_str()), login, password, atof(balance.c_str())));

        account->setBank(shared_ptr<Bank>(this));
        this->accounts.push_back(account);

    }
    inputFile.close();

}

int Bank::getNewAccountNumber() {
    srand(time(NULL));
    int newNumber = rand() % 9999 + 1000;

    for(int i = 0; i < accounts.size(); i++){
        if(accounts[i]->getNumber() == newNumber) return getNewAccountNumber();
    }
    return newNumber;
}

void Bank::addAccount(shared_ptr<Account> account){
    account->setNumber(getNewAccountNumber());
    account->setBank(shared_ptr<Bank>(this));
    accounts.push_back(account);
}

void Bank::addTransfer(shared_ptr<Transfer> transfer) {
    this->pendingTransfers.push_back(transfer);
}

bool Bank::deleteAccount(int accountNumber) {
    for(int i = 0; i < accounts.size(); i++){
        if(accounts[i]->getNumber() == accountNumber) {accounts.erase(accounts.begin() + i); return true;}
    }
    return false;
}
shared_ptr<Account> Bank::getAccountIfCredentialsMatch(shared_ptr<Account> account) {
    for(int i = 0; i < accounts.size(); i++){
        if(accounts[i]->getLogin() == account->getLogin() && accounts[i]->getPassword() == account->getPassword()) {
            return accounts[i]; }
        }
    return nullptr;
}

bool Bank::checkIfLoginAvailable(string login) {
    for(int i = 0; i < accounts.size(); i++)
        if(accounts[i]->getLogin() == login) return false;
    return true;
}

void Bank::handleTransfers() {
    for(int i = 0; i < pendingTransfers.size(); i++) {
        shared_ptr<Account> recipient = getAccountByNumber(pendingTransfers[i]->getRecipientNumber());
        shared_ptr<Account> sender = getAccountByNumber(pendingTransfers[i]->getSenderNumber());

        recipient->deposit(pendingTransfers[i]->getAmount()); //get money to recipient
        sender->setBlockedBalance(sender->getBlockedBalance() - pendingTransfers[i]->getAmount() - sender->getTransferFee()); // remove cost form blocked balance
    }
    pendingTransfers.clear();
}

shared_ptr<Account> Bank::getAccountByNumber(int accountNumber) {
    for(int i = 0; i < accounts.size(); i++){
        if(accounts[i]->getNumber() == accountNumber) {
            return accounts[i];}
    }
    return nullptr;
}

shared_ptr<Account> Bank::getAccountByLogin(string login) {
    for(int i = 0; i < accounts.size(); i++){
        if(accounts[i]->getLogin() == login) {
            return accounts[i];}
    }
    return nullptr;
}

void Bank::displayAccounts() {
    cout  << "" << endl;
    for(int i = 0; i < accounts.size(); i++) {
        cout  << this->accounts[i]->getAccountType() << ":"
                    << this->accounts[i]->getNumber() << ":"
                    << this->accounts[i]->getLogin() << ":"
                    << this->accounts[i]->getPassword() << ":"
                    << this->accounts[i]->getBalance() << endl;
    }
    cout  << "" << endl;
}
