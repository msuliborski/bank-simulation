#ifndef _STUDENTSACCOUNT_H
#define _STUDENTSACCOUNT_H

#include "Account.h"


class StudentsAccount: public Account {
private:
public:
    StudentsAccount(string name, string password);
    ~StudentsAccount();

    virtual void makeTransfer(string recipient, string title, double amount);
    virtual string getCurrency();
    virtual double getTransferLimit();
    virtual double getTransferFee();
    virtual double getMonthlyFee();
};

#endif //_STUDENTSACCOUNT_H