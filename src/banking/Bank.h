/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _BANK_H
#define _BANK_H

#include "Account.h"
#include "System.h"
#include "User.h"
#include "Investment.h"
#include "Loan.h"


class Bank {
public: 
    
/**
 * @param money
 */
void Bank(double money);
    
void ~Bank();
    
/**
 * @param name
 * @param password
 * @param age
 */
shared_ptr<Account> createAccount(string name, string password, int age);
    
/**
 * @param account
 * @param money
 * @param months
 * @param creditworthiness
 */
void createLoan(shared_ptr<Account> account, double money, int months, double creditworthiness);
    
/**
 * @param account
 * @param name
 * @param amount
 * @param months
 */
void createInvestment(shared_ptr<Account> account, string name, double amount, int months);
    
/**
 * @param account
 */
vector<shared_ptr<Transfer>> getHistory(shared_ptr<Account> account);
    
/**
 * @param account
 */
vector<Bill> withdraw(shared_ptr<Account> account);
    
/**
 * @param account
 * @param money
 */
void deposit(shared_ptr<Account> account, vector<Bill> money);
    
void manageTransfers();
    
vectors<string> getAllAccountNumbers();
private: 
    vector<Transfer> pendingTransfers;
    vector<Transfer> transferHistory;
    double moneyUSD;
    double moneyPLN;
    double moneyEUR;
    double dollarRate;
    double euroRate;
    vector<Account> accounts: vector<shared_ptr<Account>>;
    System system: shared_ptr<System>;
    vector<User> clients: vector<shared_ptr<Client>>;
    vector<Investment> investments: vector<shared_ptr<Investment>>;
    vector<Loan> loans: vector<shared_ptr<Loan>>;
};

#endif //_BANK_H