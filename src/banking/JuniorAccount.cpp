//
//#include "JuniorAccount.h"
//#include "../other/Transfer.h"
//#include <iostream>
//
//using namespace std;
//
//JuniorAccount::JuniorAccount(string name, string password) : Account(name, password) {
//
//}
//
//JuniorAccount::~JuniorAccount() {
//
//}
//
//void JuniorAccount::makeTransfer(string recipient, string title, double amount){
//
//    if (amount > getTransferLimit()){
//        cout << "You're too young to send such a big transfer!" << endl;
//    }
//    if (amount > this->getBalance()){
//        cout << "You're too poor to send such a big transfer!" << endl;
//    }
//    else {
//        shared_ptr<Transfer> transfer(
//                new Transfer(title, recipient, this->getNumber(), amount, this->getCurrency(), 0)); //chg 0 to curr day
//
//        //daj transfera do banku
//
//        //substractFromBalance(amount);
//    }
//}
//
//string JuniorAccount::getCurrency() {
//    return "PLN";
//}
//
//double JuniorAccount::getTransferLimit() {
//    return this->transferLimit;
//}
//
//double JuniorAccount::getTransferFee() {
//    return 0;
//}
//
//double JuniorAccount::getMonthlyFee() {
//    return 0;
//}