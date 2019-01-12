#include "Date.h"
#include <ctime>

Date::Date() {
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    this->day = now->tm_mday;
    this->month = now->tm_mon + 1;
    this->year = now->tm_year + 1900;
}

Date::Date(int day, int month, int year) {
    this->day=day;
    this->month=month;
    this->year=year;
}

Date::~Date() {

}

int Date::getDay() {

    return this->day;
}

int Date::getMonth() {
    return this->month;
}

int Date::getYear() {
    return this->year;
}