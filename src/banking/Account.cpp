#include <string>
#include "Account.h"

using namespace std;

Account::Account(string name, string password) {

}

Account::~Account() {

}


double Account::getBalance() {
    return 0.0;
}


virtual void Account::makeTransfer(string recipient, string title, double amount) {
    return;
}

void Account::changeLogin(int newLogin) {
    return;
}


void Account::changePassword(string newPassword) {
    return;
}

void Account::closeAccount() {
    return;
}


int Account::getID() {
    return 0;
}

string Account::getAccountType() {
    return "";
}