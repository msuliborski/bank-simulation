#include "Transfer.h"

using namespace std;

Transfer::Transfer(string title, int recipientNumber, int senderNumber, double amount) : title(title), recipientNumber(recipientNumber), senderNumber(senderNumber), amount(amount) {

}

Transfer::~Transfer() {

}

string Transfer::getTitle() {
    return this->title;
}

int Transfer::getRecipientNumber() {
    return this->recipientNumber;
}

int Transfer::getSenderNumber() {
    return this->senderNumber;
}
void Transfer::setSenderNumber(int senderNumber) {
    this->senderNumber = senderNumber;
}

double Transfer::getAmount() {
    return this->amount;
}

