#ifndef _USER_H
#define _USER_H

#include <string>
#include <memory>
#include <vector>


using namespace std;

class System;

class User {

private:
    string name;
//    map<int, string> credentials;
    double creditworthiness;
    double salary;
    int age;
    bool student;
    shared_ptr<System> system;

public:
    User(string name, double salary, int age, bool isStudent);
    ~User();
    
//    void logIn();
//    void logOut();

//    vector<shared_ptr<Account>> getMyAccounts();
//    shared_ptr<Account> getCurrentyLoggedInAccount();
//    shared_ptr<Bank> getBank();
//    bool isStudent();


};

#endif //_USER_H