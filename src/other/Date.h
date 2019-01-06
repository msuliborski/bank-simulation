/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _DATE_H
#define _DATE_H

class Date {
public: 
    
/**
 * @param day
 * @param month
 * @param year
 */
void Date(int day, int month, int year);
    
void ~Date();
    
int getDay();
    
int getMonth();
    
int getYear();
private: 
    int day;
    int month;
    int year;
};

#endif //_DATE_H