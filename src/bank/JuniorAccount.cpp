#include "JuniorAccount.h"
#include <iostream>

using namespace std;

JuniorAccount::JuniorAccount(int number, string login, string password, double balance) : Account(number, login, password, balance) {

}

JuniorAccount::~JuniorAccount() {

}


double JuniorAccount::getTransferLimit() {
    return this->transferLimit;
}

double JuniorAccount::getTransferFee() {
    return 0;
}

string JuniorAccount::getAccountType() {
    return "junior";
}
