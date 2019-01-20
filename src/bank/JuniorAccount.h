#ifndef _JUNIORACCOUNT_H
#define _JUNIORACCOUNT_H

#include "Account.h"

class JuniorAccount: public Account {

private:
    double transferLimit = 500;

public:
    JuniorAccount(int number, string login, string password, double balance);
    ~JuniorAccount();

    double getTransferLimit() override;
    double getTransferFee() override;
    string getAccountType() override;


};

#endif //_JUNIORACCOUNT_H