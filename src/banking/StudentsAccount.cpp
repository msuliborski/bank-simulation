#include "StudentsAccount.h"


StudentsAccount::StudentsAccount(string name, string password) : Account(name, password) {

}

StudentsAccount::~StudentsAccount() {

}

void StudentsAccount::makeTransfer(string recipient, string title, double amount) {

}

string StudentsAccount::getCurrency() {
    return std::__cxx11::string();
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
