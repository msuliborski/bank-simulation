/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _LOAN_H
#define _LOAN_H

class Loan {
public: 
    
/**
 * @param name
 * @param account
 * @param fee
 * @param months
 * @param day
 */
void Loan(string name, shared_ptr<Account> account, double fee, int months, int day);
    
void ~Loan();
    
int getSettlementDay();
    
int getMonthsLeft();
    
void chargeFee();
private: 
    string name;
    shared_ptr<Account> account;
    double fee;
    int monthsLeft;
    int settlementDay;
};

#endif //_LOAN_H