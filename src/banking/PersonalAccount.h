/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _PERSONALACCOUNT_H
#define _PERSONALACCOUNT_H

#include "Account.h"
#include "Account.h"


class PersonalAccount: public PersonalAccount, public Account, public Account {
public: 
    
void PersonalAccount();
    
void ~PersonalAccount();
    
/**
 * @param recipient
 * @param title
 * @param amount
 */
void makeTransfer(string recipient, string title, double amount);
    
double getTransferFee();
    
double getMonthlyFee();
private: 
    double transferFee;
    double monthlyFee;
};

#endif //_PERSONALACCOUNT_H