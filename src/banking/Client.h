/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _CLIENT_H
#define _CLIENT_H

#include "Bank.h"


class Client {
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
};

#endif //_CLIENT_H