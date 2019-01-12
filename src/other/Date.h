#ifndef _DATE_H
#define _DATE_H

class Date {
public: 
    
Date();
Date(int day, int month, int year);
~Date();
    
int getDay();
int getMonth();
int getYear();

private: 
    int day;
    int month;
    int year;
};

#endif //_DATE_H