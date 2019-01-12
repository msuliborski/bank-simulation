
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
    
//    string getCurrency();

};

#endif //_FOREIGNCURRENCYACCOUNT_H