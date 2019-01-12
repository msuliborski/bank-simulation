/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _INVESTMENT_H
#define _INVESTMENT_H

#include "Account.h"
#include "PersonalAccount.h"
#include "StudentsAccount.h"


class Investment: public Investment, public Account, public PersonalAccount, public StudentsAccount {
public: 
    
/**
 * @param name
 * @param account
 * @param amount
 * @param months
 * @param day
 */
void Investment(string name, shared_ptr<Account> account, double amount, int months, int day);
    
void ~Investment();
    
int getSettlementDay();
    
int getMonthsLeft();
    
double getFrozenBalance();
private: 
    string name;
    shared_ptr<Account> account;
    double frozenBalance;
    int monthsLeft;
    int settlementDay;
};

#endif //_INVESTMENT_H