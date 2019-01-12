#ifndef _LOAN_H
#define _LOAN_H

#include "Account.h"

class Loan {
public:
    Loan(string name, shared_ptr<Account> account, double fee, int months, int day);
    ~Loan();

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