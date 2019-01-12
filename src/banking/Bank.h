#ifndef _BANK_H
#define _BANK_H

#include <memory>
#include <vector>

#include "Account.h"
#include "Investment.h"
#include "Loan.h"

using namespace std;

class System;

class Bank {

private:
//    vector<Transfer> pendingTransfers;
//    vector<Transfer> transferHistory;
    double moneyUSD;
    double moneyPLN;
    double moneyEUR;
    double dollarRate;
    double euroRate;

    shared_ptr<System> system;
    vector<shared_ptr<Account>> accounts;
    vector<shared_ptr<Investment>> investments;
    vector<shared_ptr<Loan>> loans;

public:
    Bank(double money);
    ~Bank();

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