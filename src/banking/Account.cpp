#include <string>
#include <iostream>
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
    return this->creationDate;
}

double Account::getInterestRateOnInvestment() const {
    return this->interestRateOnInvestment;
}

double Account::getInterestRateOnLoan() const {
    return this->interestRateOnLoan;
}

const shared_ptr<Bank> &Account::getBank() const {
    return this->bank;
}

void Account::changeLogin(int newLogin) {
    string pass;
    cout << "Confirm password to change login: ";
    cin >> pass;
    if (this->password.compare(pass)){
        cout << "Password correct" << endl;
        this->login = newLogin;
    }
    else cout << "Wrong password" << endl;

}

void Account::changePassword(string newPassword) {
    string pass;
    cout << "Confirm old password to change: ";
    cin >> pass;
    if (this->password == pass){
        cout << "Password correct" << endl;
        this->password = newPassword;
    }
    else cout << "Wrong password" << endl;

}

void Account::closeAccount() {
    string pass;
    cout << "Confirm password to close account: ";
    cin >> pass;
    if (this->password == pass){
        cout << "Password correct" << endl;
        this->~Account();
    }
    else cout << "Wrong password" << endl;
}

void Account::addToBalance(double amount) {
    this->balance += amount;
}

void Account::substractFromBalance(double amount) {
    this->balance -= amount;
}

