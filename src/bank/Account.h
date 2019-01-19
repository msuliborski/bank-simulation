#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <string>
#include <memory>
#include <vector>
#include "Bank.h"


using namespace std;


class Account {

private:
    string number;

    string login;
    string password;

    double balance;
    double blockedBalance;
public:
    void setBlockedBalance(double blockedBalance);

private:

    shared_ptr<Bank> bank;

public:
    Account(string login, string password, double balance);
    ~Account();

    bool makeTransfer(string recipient, string title, double amount);

    virtual double getTransferFee() = 0;
    virtual double getTransferLimit() = 0;
    virtual string getAccountType() = 0;

    double getBalance();
    double getBlockedBalance();

    string getNumber();
    string getLogin();
    string getPassword();

    shared_ptr<Bank> getBank();

    bool withdraw(double amount);
    bool deposit(double amount);

    bool changeLogin(string newLogin);
    bool changePassword(string newPassword);
    bool closeAccount();

};

#endif //_ACCOUNT_H