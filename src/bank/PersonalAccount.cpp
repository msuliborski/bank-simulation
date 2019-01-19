#include "PersonalAccount.h"
#include <iostream>

using namespace std;

PersonalAccount::PersonalAccount(string number, string login, string password, double balance) : Account(login, password, balance) {

}

PersonalAccount::~PersonalAccount() {

}

double PersonalAccount::getTransferLimit() {
    return 999999999999;
}

double PersonalAccount::getTransferFee() {
    return this->transferFee;
}

string PersonalAccount::getAccountType() {
    return "personal";
}
