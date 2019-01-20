#ifndef _TRANSFER_H
#define _TRANSFER_H

#include <string>

using namespace std;

class Transfer {

private:
    string title;
    int recipientNumber;
    int senderNumber;
    double amount;

public:
    Transfer(string title, int recipientNumber, int senderNumber, double amount);
    ~Transfer();

    string getTitle();
    int getRecipientNumber();
    int getSenderNumber();
    void setSenderNumber(int senderNumber);
    double getAmount();

};

#endif //_TRANSFER_H