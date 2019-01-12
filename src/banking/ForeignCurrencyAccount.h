#ifndef _FOREIGNCURRENCYACCOUNT_H
#define _FOREIGNCURRENCYACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class ForeignCurrencyAccount: public Account {
private:
    string currency;
public:
    ForeignCurrencyAccount(string name, string password);
    ~ForeignCurrencyAccount();

    virtual void makeTransfer(string recipient, string title, double amount);
    virtual string getCurrency();
    virtual double getTransferLimit();
    virtual double getTransferFee();
    virtual double getMonthlyFee();

};

#endif //_FOREIGNCURRENCYACCOUNT_H