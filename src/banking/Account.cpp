#include <string>
#include "Account.h"

using namespace std;

Account::Account(string name, string password) {

}

Account::~Account() {

}

double Account::getBalance() const {
    return this->balance;
}

string Account::getNumber() const {
    return this->number;
}

const Date Account::getCreationDate() const {
    return Date();
}

double Account::getInterestRateOnInvestment() const {
    return 0;
}

double Account::getInterestRateOnLoan() const {
    return 0;
}

const shared_ptr<Bank> &Account::getBank() const {
    return <#initializer#>;
}

void Account::changeLogin(int newLogin) {

}

void Account::changePassword(string newPassword) {

}

void Account::closeAccount() {

}

