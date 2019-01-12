#include "Loan.h"

Loan::Loan(string name, shared_ptr<Account> account, double fee, int months, int day) {

}

Loan::~Loan() {

}

int Loan::getSettlementDay() {
    return 0;
}

int Loan::getMonthsLeft() {
    return 0;
}

void Loan::chargeFee() {
    return;
}