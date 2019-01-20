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
    Bank(double money);
    static shared_ptr<Bank> instance;
    double money;

    vector<shared_ptr<Account>> accounts;

public:

    static shared_ptr<Bank> GetInstance(double money);
    void saveAccountState();
    void restoreAccountState();
    int getNewAccountNumber();
    shared_ptr<Account> getAccountByNumber(int number);
    shared_ptr<Account> getAccountByLogin(string login);
    void addAccount(shared_ptr<Account> account);
    void addTransfer(shared_ptr<Transfer> transfer);
    bool deleteAccount(int);
    shared_ptr<Account> getAccountIfCredentialsMatch(shared_ptr<Account> account);
    bool checkIfLoginAvailable(string login);
    void handleTransfers();
    void displayAccounts();
};

#endif //_BANK_H