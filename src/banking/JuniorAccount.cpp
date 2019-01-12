
#include "JuniorAccount.h"
#include "../other/Transfer.h"
#include "../other/Date.h"
#include <iostream>

using namespace std;

JuniorAccount::JuniorAccount(string name, string password) : Account(name, password) {

}

JuniorAccount::~JuniorAccount() {

}

void JuniorAccount::makeTransfer(string recipient, string title, double amount){

    if (amount > getTransferLimit()){
        cout << "You're too young to send such a big transfer!" << endl;
    }
    if (amount > this->getBalance()){
        cout << "You're too poor to send such a big transfer!" << endl;
    }

    shared_ptr<Transfer> transfer(new Transfer(title, recipient, this->getNumber(), amount, this->getCurrency(), Date()));
    //daj transfera do banku


}

string JuniorAccount::getCurrency() {
    return "PLN";
}

double JuniorAccount::getTransferLimit() {
    return this->transferLimit;
}

double JuniorAccount::getTransferFee() {
    return 0;
}

double JuniorAccount::getMonthlyFee() {
    return 0;
}