#include "PersonalAccount.h"


PersonalAccount::PersonalAccount(string name, string password) : Account(name, password) {

}

PersonalAccount::~PersonalAccount() {

}

//void PersonalAccount::makeTransfer(string recipient, string title, double amount) {
//    return;
//}
//
//double PersonalAccount::getTransferFee() {
//    return 0.0;
//}
//
//double PersonalAccount::getMonthlyFee() {
//    return 0.0;
//}