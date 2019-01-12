#ifndef _DATE_H
#define _DATE_H

class Date {

public:
    int day;
    int month;
    int year;

    Date();
    Date(int day, int month, int year);
    ~Date();

};

#endif //_DATE_H