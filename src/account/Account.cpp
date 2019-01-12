/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#include "Account.h"

/**
 * Account implementation
 */


/**
 * @param name
 * @param password
 */
void Account::Account(string name, string password) {

}

void Account::~Account() {

}

/**
 * @return double
 */
double Account::getBalance() {
    return 0.0;
}

/**
 * @param recipient
 * @param title
 * @param amount
 * @return void
 */
virtual void Account::makeTransfer(string recipient, string title, double amount) {
    return;
}

/**
 * @param newLogin
 * @return void
 */
void Account::changeLogin(int newLogin) {
    return;
}

/**
 * @param newPassword
 * @return void
 */
void Account::changePassword(string newPassword) {
    return;
}

/**
 * @return void
 */
void Account::closeAccount() {
    return;
}

/**
 * @return int
 */
int Account::getID() {
    return 0;
}

/**
 * @return string
 */
string Account::getAccountType() {
    return "";
}