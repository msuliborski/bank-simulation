#include "StudentsAccount.h"
#include "../other/Transfer.h"
#include <iostream>


StudentsAccount::StudentsAccount(string name, string password) : Account(name, password) {

}

StudentsAccount::~StudentsAccount() {

}

void StudentsAccount::makeTransfer(string recipient, string title, double amount) {
    if (amount > this->getBalance()){
        cout << "You're too poor to send such a big transfer!" << endl;
    }
    else {
        shared_ptr<Transfer> transfer(
                new Transfer(title, recipient, this->getNumber(), amount, this->getCurrency(), Date()));

        //daj transfera do banku

        substractFromBalance(amount);
    }
}

string StudentsAccount::getCurrency() {
    return "PLN";
}

double StudentsAccount::getTransferLimit() {
    return 0;
}

double StudentsAccount::getTransferFee() {
    return 0;
}

double StudentsAccount::getMonthlyFee() {
    return 0;
}
