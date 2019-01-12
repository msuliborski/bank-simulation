#ifndef _INVESTMENT_H
#define _INVESTMENT_H

#include "Account.h"
#include "PersonalAccount.h"
#include "StudentsAccount.h"


class Investment {
public:
    Investment(string name, shared_ptr<Account> account, double amount, int months, int day);
    ~Investment();

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