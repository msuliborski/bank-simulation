
#include "Bank.h"
#include "StudentsAccount.h"
#include "fstream"

using namespace std;

Bank::Bank(double moneyPLN, double moneyEUR, double moneyUSD) {
    this->moneyPLN = moneyPLN;
    this->moneyEUR = moneyEUR;
    this->moneyUSD = moneyUSD;
    restoreAccountState();
//    shared_ptr<Account> account1(new StudentsAccount("Michal account", "217863", "mike", "mike", 1000));
//    this->accounts.push_back(account1);
//
//    shared_ptr<Account> account2(new StudentsAccount("Anna account", "2178XX", "anna", "anna", 1000));
//    this->accounts.push_back(account2);
}

Bank::~Bank() {
    saveAccountState();
}

void Bank::saveAccountState() {

    ofstream outputFile("account-data.txt", ios::trunc);

    for (int i = 0; i < this->accounts.size(); i++){
        outputFile  << this->accounts[i]->getAccountType() << ":"
                    << this->accounts[i]->getName() << ":"
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
        string type, name, number, login, password, balance;

        while (lineCharIterator < accountLine.length()) {
            type += accountLine[lineCharIterator];
            lineCharIterator++;
            if ((char) accountLine[lineCharIterator] == ':') { lineCharIterator++; break; }
        }

        while (lineCharIterator < accountLine.length()) {
            name += accountLine[lineCharIterator];
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

        shared_ptr<Account> account(new StudentsAccount(name, number, login, password, atof(balance.c_str())));
        this->accounts.push_back(account);

    }
    inputFile.close();

}

vector<shared_ptr<Account>> &Bank::getAccounts() {
    return accounts;
}

//shared_ptr<Account> Bank::createAccount(string name, string password, int age) {
//    return null;
//}
//
//
//void Bank::createLoan(shared_ptr<Account> account, double money, int months, double creditworthiness) {
//    return;
//}
//
//void Bank::createInvestment(shared_ptr<Account> account, string name, double amount, int months) {
//    return;
//}
//
//vector<shared_ptr<Transfer>> Bank::getHistory(shared_ptr<Account> account) {
//    return null;
//}
//
//vector<Bill> Bank::withdraw(shared_ptr<Account> account) {
//    return null;
//}
//
//void Bank::deposit(shared_ptr<Account> account, vector<Bill> money) {
//    return;
//}
//
//void Bank::manageTransfers() {
//    return;
//}
//
//vectors<string> Bank::getAllAccountNumbers() {
//    return null;
//}