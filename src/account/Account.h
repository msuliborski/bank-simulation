#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include "../banking/Bank.h"

class Account {
public:
/**
 * @param name
 * @param password
 */
Account(string name, string password);
    
~Account();
    
double getBalance();
    
/**
 * @param recipient
 * @param title
 * @param amount
 */
virtual void makeTransfer(string recipient, string title, double amount) = 0;
    
/**
 * @param newLogin
 */
void changeLogin(int newLogin);
    
/**
 * @param newPassword
 */
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
    Client client: shared_ptr<Client>;
};

#endif //_ACCOUNT_H