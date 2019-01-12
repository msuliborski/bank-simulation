#ifndef _INVESTMENT_H
#define _INVESTMENT_H

#include "Account.h"
#include "PersonalAccount.h"
#include "StudentsAccount.h"


class Investment: public Investment, public Account, public PersonalAccount, public StudentsAccount {
public:
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