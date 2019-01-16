#ifndef _STUDENTSACCOUNT_H
#define _STUDENTSACCOUNT_H

#include "Account.h"


class StudentsAccount: public Account {
private:
public:
    StudentsAccount(string name, string number, string login, string password, double balance);
    ~StudentsAccount();

    void makeTransfer(string recipient, string title, double amount) override;

    string getCurrency() override;

    double getTransferLimit() override;
    string getAccountType() override;
};

#endif //_STUDENTSACCOUNT_H