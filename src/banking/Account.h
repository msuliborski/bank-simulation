#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include "Bank.h"

class Account {
public:
    Account(string name, string password);
    ~Account();
    
double getBalance();

virtual void makeTransfer(string recipient, string title, double amount) = 0;

void changeLogin(int newLogin);

void changePassword(string newPassword);
    
void closeAccount();
    
int getID();
    
string getAccountType();

private: 
    string name;
    int id;
    string password;
    string number;
    double balance;
    Date creationDate;
    double interestRateOnInvestment;
    double interestRateOnLoan;
    string accountType;
    Bank bank: shared_ptr<Bank>;
};

#endif //_ACCOUNT_H