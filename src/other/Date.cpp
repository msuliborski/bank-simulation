#include "Date.h"
#include <ctime>

Date::Date() {
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
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