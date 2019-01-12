/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _JUNIORACCOUNT_H
#define _JUNIORACCOUNT_H

#include "Account.h"


class JuniorAccount: public Account {
public: 
    double transferLimit;
    
void JuniorAccount();
    
void ~JuniorAccount();
    
double getTransferLimit();
};

#endif //_JUNIORACCOUNT_H