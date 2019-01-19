#include "Transfer.h"

using namespace std;

Transfer::Transfer(string title, string recipientNumber, string senderNumber, double amount) {
    this->title = title;
    this->recipientNumber = recipientNumber;
    this->senderNumber = senderNumber;
    this->amount = amount;
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
void Transfer::setSenderNumber(string senderNumber) {
    this->senderNumber = senderNumber;
}

double Transfer::getAmount() {
    return this->amount;
}

