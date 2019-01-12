/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _TRANSFER_H
#define _TRANSFER_H

class Transfer {
public: 
    
/**
 * @param title
 * @param recipentNumber
 * @param senderNumber
 * @param amount
 * @param currency
 * @param date
 */
void Transfer(string title, string recipentNumber, string senderNumber, double amount, string currency, Date date);
    
void ~Transfer();
    
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