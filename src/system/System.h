#ifndef _SYSTEM_H
#define _SYSTEM_H

#include <memory>
#include <vector>

#include "User.h"
#include "../other/Date.h"

using namespace std;

class System {

private:
    shared_ptr<Date> currentDate;
//    vector<Transfer> pendingTransfers;
//    vector<shared_ptr<Bank>> banks;
    vector<shared_ptr<User>> users;

public:
    System();
    ~System();

    void addDay();
    shared_ptr<User> getUser(string name);

    Date getCurrentDate();
    void setCurrentDate(int day, int month, int year);
//
//    void payTheSalary();
//    void payInterest();
//    void chargeLoanFee();
//    void chargeAccountFee();
//    void manageTransfers();
};

#endif //_SYSTEM_H