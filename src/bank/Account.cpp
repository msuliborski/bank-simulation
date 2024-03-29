#include <string>
#include <iostream>
#include "Account.h"
//#include "Transfer.h"

using namespace std;

Account::Account(int number, string login, string password, double balance) : number(number),login(login), password(password), balance(balance), blockedBalance(0) {

}


Account::~Account() = default;

bool Account::makeTransfer(int recipient, string title, double amount) {

    if (amount + this->getTransferFee() > this->getBalance() || amount > this->getTransferLimit()){
        return false;
    } else {
        shared_ptr<Transfer> transfer(new Transfer(title, recipient, this->getNumber(), amount));

        bank->addTransfer(transfer);
        this->balance -= amount + this->getTransferFee();
        this->blockedBalance += amount + this->getTransferFee();
    }
    return true;
}

double Account::getBalance() {
    return this->balance;
}

double Account::getBlockedBalance() {
    return this->blockedBalance;
}


int Account::getNumber() {
    return this->number;
}


string Account::getLogin() {
    return this->login;
}


string Account::getPassword() {
    return this->password;
}


shared_ptr<Bank> Account::getBank() {
    return this->bank;
}


bool Account::withdraw(double amount) {
    if (amount > this->getBalance()){
        return false;
    } else {
        balance -= amount;
    }
    return true;
}


bool Account::deposit(double amount) {
    balance += amount;
    return true;
}


bool Account::changeLogin(string newLogin) {
    this->login = newLogin;
    return true;
}


bool Account::changePassword(string newPassword) {
    this->password = newPassword;
    return true;
}


bool Account::closeAccount() {
    return bank->deleteAccount(this->number);
}

void Account::setBlockedBalance(double blockedBalance) {
    this->blockedBalance = blockedBalance;
}

void Account::setNumber(int number) {
    this->number = number;
}

void Account::setBank(shared_ptr<Bank> bank) {
    this->bank = bank;
}
