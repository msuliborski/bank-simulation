#include "PersonalAccount.h"
#include "../other/Transfer.h"
#include <iostream>



PersonalAccount::PersonalAccount(string name, string password) : Account(name, password) {

}

PersonalAccount::~PersonalAccount() {

}

void PersonalAccount::makeTransfer(string recipient, string title, double amount) {
    if (amount > getTransferLimit()){
        cout << "You're too young to send such a big transfer!" << endl;
    }
    if (amount > this->getBalance()){
        cout << "You're too poor to send such a big transfer!" << endl;
    }
    else {
        shared_ptr<Transfer> transfer(
                new Transfer(title, recipient, this->getNumber(), amount, this->getCurrency(), Date()));
        //daj transfera do banku

        addToBalance(amount);
    }
}

string PersonalAccount::getCurrency() {
    return std::__cxx11::string();
}

double PersonalAccount::getTransferLimit() {
    return 0;
}

double PersonalAccount::getTransferFee() {
    return 0;
}

double PersonalAccount::getMonthlyFee() {
    return 0;
}

