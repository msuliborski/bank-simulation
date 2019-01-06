/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#include "Transfer.h"

/**
 * Transfer implementation
 */


/**
 * @param title
 * @param recipentNumber
 * @param senderNumber
 * @param amount
 * @param currency
 * @param date
 */
void Transfer::Transfer(string title, string recipentNumber, string senderNumber, double amount, string currency, Date date) {

}

void Transfer::~Transfer() {

}

/**
 * @return string
 */
string Transfer::getTitle() {
    return "";
}

/**
 * @return string
 */
string Transfer::getRecipientNumber() {
    return "";
}

/**
 * @return string
 */
string Transfer::getSenderNumber() {
    return "";
}

/**
 * @return double
 */
double Transfer::getAmount() {
    return 0.0;
}

/**
 * @return string
 */
string Transfer::getCurrency() {
    return "";
}

/**
 * @return Date
 */
Date Transfer::getDate() {
    return null;
}