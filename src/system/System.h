/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "Bank.h"
#include "User.h"


class System {
public: 
    
void System();
    
void ~System();
    
void addDay();
    
Date getCurrentDate();
private: 
    Date currentDate;
    vector<Transfer> pendingTransfers;
    vector<Bank> bank: vector<shared_ptr<Bank>>;
    vector<User> system:shared_ptr<User>;
    
void payTheSalary();
    
void payInterest();
    
void chargeLoanFee();
    
void chargeAccountFee();
    
void manageTransfers();
};

#endif //_SYSTEM_H