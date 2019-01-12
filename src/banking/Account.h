#ifndef _ACCOUNT_H
#define _ACCOUNT_H


#include <string>
#include <memory>
#include <vector>

#include "../other/Date.h"

using namespace std;

class Bank;

class Account {

private:
    string name;

    int login;
    string password;

    string number;
    double balance;
    Date creationDate;
    double interestRateOnInvestment;
    double interestRateOnLoan;

    shared_ptr<Bank> bank;

public:
    Account(string name, string password);
    ~Account();

    virtual void makeTransfer(string recipient, string title, double amount) = 0;
    virtual string getCurrency() = 0;
    virtual double getTransferLimit() = 0;
    virtual double getTransferFee() = 0;
    virtual double getMonthlyFee() = 0;

    double getBalance() const;

    const Date getCreationDate() const;

    double getInterestRateOnInvestment() const;

    double getInterestRateOnLoan() const;

    const shared_ptr<Bank> &getBank() const;

    void changeLogin(int newLogin);
    void changePassword(string newPassword);
    void closeAccount();

};

#endif //_ACCOUNT_H