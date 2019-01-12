
#include "JuniorAccount.h"


JuniorAccount::JuniorAccount(string name, string password) : Account(name, password) {

}

JuniorAccount::~JuniorAccount() {

}

void JuniorAccount::makeTransfer(string recipient, string title, double amount) {

}

string JuniorAccount::getCurrency() {
    return std::__cxx11::string();
}

double JuniorAccount::getTransferLimit() {
    return 0;
}

double JuniorAccount::getTransferFee() {
    return 0;
}

double JuniorAccount::getMonthlyFee() {
    return 0;
}