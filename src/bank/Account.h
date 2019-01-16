#ifndef _ACCOUNT_H
#define _ACCOUNT_H


#include <string>
#include <memory>
#include <vector>


using namespace std;

class Bank;

class Account {

private:
    string name;
    string number;

    string login;
    string password;

    double balance;

    shared_ptr<Bank> bank;

public:
    Account(string name, string number, string login, string password, double balance);
    ~Account();

    virtual void makeTransfer(string recipient, string title, double amount) = 0;
    virtual string getCurrency() = 0;
    virtual double getTransferLimit() = 0;
    virtual string getAccountType() = 0;

    double getBalance();

    string getName();
    string getNumber();
    string getLogin();
    string getPassword();

    shared_ptr<Bank> getBank();

    void withdraw(double amount);
    void deposit(double amount);

    void changeLogin(int newLogin);
    void changePassword(string newPassword);
    void changeNumber(int newLogin);
    void changeName(string newPassword);
    void closeAccount();

};

#endif //_ACCOUNT_H