#ifndef _TRANSFER_H
#define _TRANSFER_H

#include <string>

using namespace std;

class Transfer {

private:
    string title;
    string recipientNumber;
    string senderNumber;
    double amount;

public:
    Transfer(string title, string recipientNumber, string senderNumber, double amount);
    ~Transfer();

    string getTitle();
    string getRecipientNumber();
    string getSenderNumber();
    void setSenderNumber(string senderNumber);
    double getAmount();

};

#endif //_TRANSFER_H