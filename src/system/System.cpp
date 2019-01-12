#include "System.h"
#include "../other/Date.h"
#include <memory>
#include <vector>

System::System() {

}

System::~System() {

}

void System::addDay() {

}

shared_ptr<User> System::getUser(string name) {
    //search for users or return new user with that name
    return shared_ptr<User>();
}

Date System::getCurrentDate() {
    return Date();
}

void System::setCurrentDate(int day, int month, int year) {
    this->currentDate = Date(day, month, year);
}
