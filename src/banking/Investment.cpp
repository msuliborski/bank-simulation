#include "Investment.h"

Investment::Investment(string name, shared_ptr<Account> account, double amount, int months, int day) {

}

Investment::~Investment() {

}

int Investment::getSettlementDay() {
    return 0;
}

int Investment::getMonthsLeft() {
    return 0;
}

double Investment::getFrozenBalance() {
    return 0.0;
}