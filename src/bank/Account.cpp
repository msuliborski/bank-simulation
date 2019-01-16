#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(string name, string number, string login, string password, double balance) {
    this->name = name;
    this->number = number;
    this->login = login;
    this->password = password;
    this->balance = balance;
}


Account::~Account() = default;


double Account::getBalance() {
    return this->balance;
}


string Account::getName() {
    return this->name;
}


string Account::getNumber() {
    return this->number;
}


string Account::getLogin() {
    return this->login;
}


string Account::getPassword() {
    return this->password;
}


shared_ptr<Bank> Account::getBank() {
    return this->bank;
}


void Account::withdraw(double amount) {

}


void Account::deposit(double amount) {

}


void Account::changeLogin(int newLogin) {
    string pass;
    cout << "Confirm password to change login: ";
    cin >> pass;
    if (this->password.compare(pass)){
        cout << "Password correct" << endl;
        this->login = newLogin;
    } else {
        cout << "Wrong password" << endl;
    }
}


void Account::changePassword(string newPassword) {
    string pass;
    cout << "Confirm old password to change: ";
    cin >> pass;
    if (this->password == pass){
        cout << "Password correct" << endl;
        this->password = newPassword;
    } else {
        cout << "Wrong password" << endl;
    }

}


void Account::changeNumber(int newLogin) {

}


void Account::changeName(string newPassword) {

}


void Account::closeAccount() {
    string pass;
    cout << "Confirm password to close account: ";
    cin >> pass;
    if (this->password == pass){
        cout << "Password correct" << endl;
        this->~Account();
    } else {
        cout << "Wrong password" << endl;
    }
}
