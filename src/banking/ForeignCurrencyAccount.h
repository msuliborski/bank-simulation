/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _FOREIGNCURRENCYACCOUNT_H
#define _FOREIGNCURRENCYACCOUNT_H

#include "Account.h"


class ForeignCurrencyAccount: public Account {
public: 
    
void ForeignCurrencyAccount();
    
void ~ForeignCurrencyAccount();
    
string getCurrency();
private: 
    string currency;
};

#endif //_FOREIGNCURRENCYACCOUNT_H