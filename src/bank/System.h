#ifndef _SYSTEM_H
#define _SYSTEM_H

#include <memory>
#include <vector>

#include "User.h"

class Bank;

using namespace std;

class System {

private:
    shared_ptr<Bank> bank;
    //vector<shared_ptr<User>> users;

public:
    System();
    ~System();


    shared_ptr<Bank> getBank();
    //shared_ptr<User> getUser(string name);

//
//    void payTheSalary();
//    void payInterest();
//    void chargeLoanFee();
//    void chargeAccountFee();
//    void manageTransfers();
};

#endif //_SYSTEM_H