/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _STUDENTSACCOUNT_H
#define _STUDENTSACCOUNT_H

#include "Account.h"


class StudentsAccount: public Account {
public: 
    
void StudentsAccount();
    
void ~StudentsAccount();
    
/**
 * @param recipient
 * @param title
 * @param amount
 */
void makeTransfer(string recipient, string title, double amount);
};

#endif //_STUDENTSACCOUNT_H