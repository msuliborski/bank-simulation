#ifndef _STUDENTSACCOUNT_H
#define _STUDENTSACCOUNT_H

#include "Account.h"


class StudentsAccount: public Account {
private:
public:
    StudentsAccount(int number, string login, string password, double balance);
    ~StudentsAccount();

    double getTransferFee() override;
    double getTransferLimit() override;
    string getAccountType() override;
};

#endif //_STUDENTSACCOUNT_H