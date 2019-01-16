#include "System.h"
#include "Bank.h"
#include <memory>
#include <vector>
#include <iostream>
#include <fstream>

System::System() {
    shared_ptr<Bank> bank(new Bank(10000000, 1000000, 1000000));
    this->bank = bank;
}

System::~System() {
//    ofstream outputFile("banks.txt", ios::trunc);
//
//    outputFile  << this->system->getCurrentDay() << endl;
//
//    outputFile.close();
}

shared_ptr<Bank> System::getBank() {
    return this->bank;
}



//shared_ptr<User> System::getUser(string name) {
//    //search for users or return new user with that name
//    return shared_ptr<User>();
//}
