#ifndef _SIMULATIONLOGIC_H
#define _SIMULATIONLOGIC_H

#include <memory>
#include "../bank/Account.h"

using namespace std;

class Bank;
class UserInterface;

class SimulationLogic {
private:
    shared_ptr<Bank> bank;
    shared_ptr<UserInterface> ui;

public:
    void simulate();
    shared_ptr<Account> logIn();

    void makeTransfer(shared_ptr<Account> account);

    void depositMoney(shared_ptr<Account> account);
    void withdrawMoney(shared_ptr<Account> account);
    void changeLogin(shared_ptr<Account> account);
    void changePassword(shared_ptr<Account> account);
    void closeAccount(shared_ptr<Account> account);
    shared_ptr<Account> createAccount();

};

#endif //_SIMULATIONLOGIC_H