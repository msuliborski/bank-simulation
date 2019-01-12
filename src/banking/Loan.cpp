/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#include "Loan.h"

/**
 * Loan implementation
 */


/**
 * @param name
 * @param account
 * @param fee
 * @param months
 * @param day
 */
void Loan::Loan(string name, shared_ptr<Account> account, double fee, int months, int day) {

}

void Loan::~Loan() {

}

/**
 * @return int
 */
int Loan::getSettlementDay() {
    return 0;
}

/**
 * @return int
 */
int Loan::getMonthsLeft() {
    return 0;
}

/**
 * @return void
 */
void Loan::chargeFee() {
    return;
}