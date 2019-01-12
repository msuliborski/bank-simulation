#include "PersonalAccount.h"
#include "../other/Transfer.h"
#include <iostream>

using namespace std;

PersonalAccount::PersonalAccount(string name, string password) : Account(name, password) {

}

PersonalAccount::~PersonalAccount() {

}

void PersonalAccount::makeTransfer(string recipient, string title, double amount) {

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

string PersonalAccount::getCurrency() {
    return "PLN";
}

double PersonalAccount::getTransferLimit() {
    return 0;
}

double PersonalAccount::getTransferFee() {
    return this->transferFee;
}

double PersonalAccount::getMonthlyFee() {
    return this->monthlyFee;
}

