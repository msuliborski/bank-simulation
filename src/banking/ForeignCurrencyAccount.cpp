#include <string>
#include "ForeignCurrencyAccount.h"


ForeignCurrencyAccount::ForeignCurrencyAccount(string name, string password, string currency) : Account(name, password) {

}

ForeignCurrencyAccount::~ForeignCurrencyAccount() {

}

void ForeignCurrencyAccount::makeTransfer(string recipient, string title, double amount) {
    //trzeba dorobić przelicznik
}

string ForeignCurrencyAccount::getCurrency() {
    return this->currency;
}

double ForeignCurrencyAccount::getTransferLimit() {
    return 0;
}

double ForeignCurrencyAccount::getTransferFee() {
    return this->transferFee;
}

double ForeignCurrencyAccount::getMonthlyFee() {
    return this->monthlyFee;
}