/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _USERINTERFACE_H
#define _USERINTERFACE_H

#include "Date.h"


class UserInterface: public Date {
public: 
    
/**
 * @param account
 */
void displayAccountStatus(shared_ptr<Account> account);
    
/**
 * @param account
 */
void displayTransferHistory(shared_ptr<Account> account);
    
/**
 * @param account
 */
void displayCurrentDate(shared_ptr<Account> account);
    
string getIdentity();
    
/**
 * @param banks
 */
void displayBanks(Bank banks);
    
int getBankNumber();
    
/**
 * @param accounts
 */
void displayAccounts(Account accounts);
    
void getAccountNumber();
    
void displayActions();
    
void getOperationNumber();
};

#endif //_USERINTERFACE_H