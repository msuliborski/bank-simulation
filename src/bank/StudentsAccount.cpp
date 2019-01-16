#include "StudentsAccount.h"
#include "Transfer.h"
#include <iostream>


StudentsAccount::StudentsAccount(string name, string number, string login, string password, double balance) : Account(name, number, login, password, balance) {

}

StudentsAccount::~StudentsAccount() {

}

void StudentsAccount::makeTransfer(string recipient, string title, double amount) {
    if (amount > this->getBalance()){
        cout << "You're too poor to send such a big transfer!" << endl;
    }
    else {
        shared_ptr<Transfer> transfer(
                new Transfer(title, recipient, this->getNumber(), amount, this->getCurrency()));

        //daj transfera do banku

        withdraw(amount);
    }
}

string StudentsAccount::getCurrency() {
    return "PLN";
}

double StudentsAccount::getTransferLimit() {
    return 0;
}

string StudentsAccount::getAccountType() {
    return "student";
}

