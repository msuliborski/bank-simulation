/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include "../banking/Bank.h"
#include "../banking/Client.h"


class Account {
public: 
    
/**
 * @param name
 * @param password
 */
void Account(string name, string password);
    
void ~Account();
    
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