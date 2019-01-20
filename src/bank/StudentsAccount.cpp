#include "StudentsAccount.h"
#include <iostream>


StudentsAccount::StudentsAccount(int number, string login, string password, double balance) : Account(number, login, password, balance) {

}

StudentsAccount::~StudentsAccount() {

}

double StudentsAccount::getTransferFee() {
    return 0;
}


double StudentsAccount::getTransferLimit() {
    return 999999999999;
}

string StudentsAccount::getAccountType() {
    return "student";
}
