/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#include "Bank.h"

/**
 * Bank implementation
 */


/**
 * @param money
 */
void Bank::Bank(double money) {

}

void Bank::~Bank() {

}

/**
 * @param name
 * @param password
 * @param age
 * @return shared_ptr<Account>
 */
shared_ptr<Account> Bank::createAccount(string name, string password, int age) {
    return null;
}

/**
 * @param account
 * @param money
 * @param months
 * @param creditworthiness
 * @return void
 */
void Bank::createLoan(shared_ptr<Account> account, double money, int months, double creditworthiness) {
    return;
}

/**
 * @param account
 * @param name
 * @param amount
 * @param months
 * @return void
 */
void Bank::createInvestment(shared_ptr<Account> account, string name, double amount, int months) {
    return;
}

/**
 * @param account
 * @return vector<shared_ptr<Transfer>>
 */
vector<shared_ptr<Transfer>> Bank::getHistory(shared_ptr<Account> account) {
    return null;
}

/**
 * @param account
 * @return vector<Bill>
 */
vector<Bill> Bank::withdraw(shared_ptr<Account> account) {
    return null;
}

/**
 * @param account
 * @param money
 * @return void
 */
void Bank::deposit(shared_ptr<Account> account, vector<Bill> money) {
    return;
}

/**
 * @return void
 */
void Bank::manageTransfers() {
    return;
}

/**
 * @return vectors<string>
 */
vectors<string> Bank::getAllAccountNumbers() {
    return null;
}