
#ifndef _FOREIGNCURRENCYACCOUNT_H
#define _FOREIGNCURRENCYACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class ForeignCurrencyAccount: public Account {
public: 
    
    ForeignCurrencyAccount();

    ~ForeignCurrencyAccount();
    
    string getCurrency();

private: 
    string currency;
};

#endif //_FOREIGNCURRENCYACCOUNT_H