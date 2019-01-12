/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#include "Investment.h"

/**
 * Investment implementation
 */


/**
 * @param name
 * @param account
 * @param amount
 * @param months
 * @param day
 */
void Investment::Investment(string name, shared_ptr<Account> account, double amount, int months, int day) {

}

void Investment::~Investment() {

}

/**
 * @return int
 */
int Investment::getSettlementDay() {
    return 0;
}

/**
 * @return int
 */
int Investment::getMonthsLeft() {
    return 0;
}

/**
 * @return double
 */
double Investment::getFrozenBalance() {
    return 0.0;
}