#include <string>
#include "ForeignCurrencyAccount.h"


ForeignCurrencyAccount::ForeignCurrencyAccount(string name, string password) : Account(name, password) {

}

ForeignCurrencyAccount::~ForeignCurrencyAccount() {

}

void ForeignCurrencyAccount::makeTransfer(string recipient, string title, double amount) {

}

string ForeignCurrencyAccount::getCurrency() {
    return std::__cxx11::string();
}

double ForeignCurrencyAccount::getTransferLimit() {
    return 0;
}

double ForeignCurrencyAccount::getTransferFee() {
    return 0;
}

double ForeignCurrencyAccount::getMonthlyFee() {
    return 0;
}