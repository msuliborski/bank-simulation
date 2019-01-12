#include "Date.h"
#include <ctime>

Date::Date() {
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    day = now->tm_mday;
    month = now->tm_mon + 1;
    year = now->tm_year + 1900;
}

Date::Date(int day, int month, int year) {

}

Date::~Date() {

}

int Date::getDay() {

    return 0;
}

int Date::getMonth() {
    return 0;
}

int Date::getYear() {
    return 0;
}