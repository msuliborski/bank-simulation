#ifndef _TRANSFER_H
#define _TRANSFER_H

#include "Date.h"
#include <string>

using namespace std;

class Transfer {
public: 
    
Transfer(string title, string recipentNumber, string senderNumber, double amount, string currency, Date date);
    
~Transfer();
    
string getTitle();
    
string getRecipientNumber();
    
string getSenderNumber();
    
double getAmount();
    
string getCurrency();
    
Date getDate();
private: 
    string title;
    string recipientNumber;
    string senderNumber;
    double amount;
    string currency;
    Date date;
};

#endif //_TRANSFER_H