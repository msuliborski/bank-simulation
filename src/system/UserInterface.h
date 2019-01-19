#ifndef _USERINTERFACE_H
#define _USERINTERFACE_H

#include <memory>
#include "../bank/Account.h"

using namespace std;

class Bank;

class UserInterface{

private:
    shared_ptr<Bank> bank;

public:
    void displaySuccess();
    void displayFailed();
    void displayAccountDeails(shared_ptr<Account> account);

    int askUserLogOrSign();
    int askUserAccountAction();
    shared_ptr<Account> askUserForLoginAccountInfo();
    shared_ptr<Transfer> askUserForTransferInfo();
    shared_ptr<Account> askUserForNewAccountInfo();
    int getNumberFromUser(int from, int to);
    double askUserForDepositInfo();
    double askUserForWithdrawInfo();
    string askUserForNewPassword();
    string askUserForNewLogin();
    bool askUserForPasswordConfirmation(shared_ptr<Account> account);
};

#endif //_USERINTERFACE_H