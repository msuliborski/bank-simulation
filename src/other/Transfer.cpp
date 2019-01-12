#include "Transfer.h"

using namespace std;

Transfer::Transfer(string title, string recipentNumber, string senderNumber, double amount, string currency, Date date) {
    this->title = title;
    this->recipientNumber = recipentNumber;
    this->senderNumber = senderNumber;
    this->amount = amount;
    this->currency = currency;
    this->date = date;
}

Transfer::~Transfer() {

}

string Transfer::getTitle() {
    return this->title;
}

string Transfer::getRecipientNumber() {
    return this->recipientNumber;
}

string Transfer::getSenderNumber() {
    return this->senderNumber;
}

double Transfer::getAmount() {
    return this->amount;
}

string Transfer::getCurrency() {
    return this->currency;
}

Date Transfer::getDate() {
    return this->date;
}