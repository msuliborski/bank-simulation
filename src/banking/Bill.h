/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _BILL_H
#define _BILL_H

class Bill {
public: 
    string currency;
    
/**
 * @param value
 */
void Bill(int value);
    
void ~Bill();
    
int checkValue();
    
int checkCurrency();
private: 
    int value;
};

#endif //_BILL_H