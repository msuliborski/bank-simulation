#include "PersonalAccount.h"


PersonalAccount::PersonalAccount(string name, string password) : Account(name, password) {

}

PersonalAccount::~PersonalAccount() {

}

void PersonalAccount::makeTransfer(string recipient, string title, double amount) {

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

