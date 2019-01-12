#ifndef _JUNIORACCOUNT_H
#define _JUNIORACCOUNT_H

#include "Account.h"

class JuniorAccount: public Account {
private:
    double transferLimit;

public:
    JuniorAccount(string name, string password);
    ~JuniorAccount();

    virtual void makeTransfer(string recipient, string title, double amount);
    virtual string getCurrency();
    virtual double getTransferLimit();
    virtual double getTransferFee();
    virtual double getMonthlyFee();
};


#endif //_JUNIORACCOUNT_H