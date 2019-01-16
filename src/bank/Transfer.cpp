#include "Transfer.h"

using namespace std;

Transfer::Transfer(string title, string recipientNumber, string senderNumber, double amount, string currency) {
    this->title = title;
    this->recipientNumber = recipientNumber;
    this->senderNumber = senderNumber;
    this->amount = amount;
    this->currency = currency;
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
