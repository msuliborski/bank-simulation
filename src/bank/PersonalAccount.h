#ifndef _PERSONALACCOUNT_H
#define _PERSONALACCOUNT_H

#include "Account.h"

class PersonalAccount: public Account{

private:
    double transferFee = 5;

public:
    PersonalAccount(string number, string login, string password, double balance);
    ~PersonalAccount();

    double getTransferLimit() override;
    double getTransferFee() override;
    string getAccountType() override;
};

#endif //_PERSONALACCOUNT_H