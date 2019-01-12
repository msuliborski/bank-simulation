#include "System.h"
#include "../other/Date.h"
#include <memory>
#include <vector>
#include <iostream>

System::System() {
    shared_ptr<Date> date(new Date());
    this->currentDate = date;
}

System::~System() {

}

void System::addDay() {
    setCurrentDate(getCurrentDate().day+1, getCurrentDate().month, getCurrentDate().year);
    cout << "getCurrentDate().getDay()+1" << getCurrentDate().day+1 << endl;
}

shared_ptr<User> System::getUser(string name) {
    //search for users or return new user with that name
    return shared_ptr<User>();
}

Date System::getCurrentDate() {
    return Date();
}

void System::setCurrentDate(int day, int month, int year) {
    this->currentDate->day = day;
    this->currentDate->month = month;
    this->currentDate->year = year;
}
