#ifndef _BANK_H
#define _BANK_H

#include <memory>
#include <vector>
#include "Transfer.h"

class Account;

using namespace std;

class Bank {

private:
    vector<shared_ptr<Transfer>> pendingTransfers;
    vector<shared_ptr<Transfer>> transferHistory;
    Bank(double money);
    static shared_ptr<Bank> instance;
    double money;

    vector<shared_ptr<Account>> accounts;

public:

    static shared_ptr<Bank> GetInstance(double money);
    void saveAccountState();
    void restoreAccountState();
    string getNewAccountNumber();
    shared_ptr<Account> getAccountByNumber(string number);

    void addAccount(shared_ptr<Account> account);
    void addTransfer(shared_ptr<Transfer> transfer);
    bool deleteAccount(string);
    shared_ptr<Account> checkIfAccountExists(shared_ptr<Account>);
    void handleTransfers();
    void displayAccounts();

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