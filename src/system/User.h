/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _USER_H
#define _USER_H

#include "Bank.h"
#include "SimulationLogic.h"
#include "System.h"


class User {
public: 
    
/**
 * @param name
 * @param salary
 * @param age
 * @param isStudent
 */
void Client(string name, double salary, int age, bool isStudent);
    
void ~Client();
    
void logIn();
    
void logOut();
    
vector<shared_ptr<Account>> getMyAccounts();
    
void displayAccountStatus();
    
void displayTransferHistory();
    
shared_ptr<Account> getCurrentyLoggedInAccount();
    
shared_ptr<Bank> getBank();
    
bool isStudent();
private: 
    string name;
    vector<Bill> cash;
    map<int, string> credentials;
    shared_ptr<Account> currentyLoggedInAccount;
    double creditworthiness;
    double salary;
    int age;
    bool isStudent;
    Bank bank: shared_ptr<Bank>;
    SimulationLogic logic: shared_ptr<SimulationLogic>;
    System system:shared_ptr<System>;
};

#endif //_USER_H