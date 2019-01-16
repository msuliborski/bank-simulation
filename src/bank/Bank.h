#ifndef _BANK_H
#define _BANK_H

#include <memory>
#include <vector>

#include "Account.h"

using namespace std;

class System;

class Bank {

public:
    Bank(double moneyPLN, double moneyEUR, double moneyUSD);
    ~Bank();

private:
//    vector<Transfer> pendingTransfers;
//    vector<Transfer> transferHistory;
    double moneyPLN;
    double moneyEUR;
    double moneyUSD;
    double dollarRate;
    double euroRate;

    shared_ptr<System> system;
    vector<shared_ptr<Account>> accounts;

public:

    void saveAccountState();
    void restoreAccountState();

    vector<shared_ptr<Account>>& getAccounts();

//    shared_ptr<Account> createAccount(string name, string password, int age);
//
//    void createLoan(shared_ptr<Account> account, double money, int months, double creditworthiness);
//
//    void createInvestment(shared_ptr<Account> account, string name, double amount, int months);
//
//    vector<shared_ptr<Transfer>> getHistory(shared_ptr<Account> account);
//
//
//    void deposit(shared_ptr<Account> account, vector<Bill> money);
//
//    void manageTransfers();
//
//    vectors<string> getAllAccountNumbers();
};

#endif //_BANK_H