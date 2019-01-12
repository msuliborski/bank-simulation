#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "User.h"
#include <memory>
#include <vector>

using namespace std;

class System {

private:
//    Date currentDate;
//    vector<Transfer> pendingTransfers;
//    vector<shared_ptr<Bank>> banks;
    vector<shared_ptr<User>> users;

public:
    System();
    ~System();

//    void addDay();
//    Date getCurrentDate();
//
//    void payTheSalary();
//    void payInterest();
//    void chargeLoanFee();
//    void chargeAccountFee();
//    void manageTransfers();
};

#endif //_SYSTEM_H