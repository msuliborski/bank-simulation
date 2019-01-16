#ifndef _TRANSFER_H
#define _TRANSFER_H

#include <string>

using namespace std;

class Transfer {

public:
    Transfer(string title, string recipientNumber, string senderNumber, double amount, string currency);
    ~Transfer();

    string getTitle();
    string getRecipientNumber();
    string getSenderNumber();
    double getAmount();
    string getCurrency();

private:
    string title;
    string recipientNumber;
    string senderNumber;
    double amount;
    string currency;
};

#endif //_TRANSFER_H