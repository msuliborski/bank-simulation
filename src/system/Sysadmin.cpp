#include <fstream>
#include "Sysadmin.h"


Sysadmin::Sysadmin() {
    ifstream inputFile;

    inputFile.open("system.txt", ios::out);

    string tempLine;

    getline(inputFile, tempLine);

    int i = 0;
    string day = "", month = "", year = "";
    int d = 0, m = 0, y = 0;

    while (i < tempLine.length()) {
        day += tempLine[i]; i++;
        if ((char)tempLine[i] == 58) { i++; break; }
    }

    while (i < tempLine.length()) {
        month += tempLine[i]; i++;
        if ((char)tempLine[i] == 58) { i++; break; }
    }

    while (i < tempLine.length()) {
        year += tempLine[i]; i++;
        if ((char)tempLine[i] == 58) { i++; break; }
    }

    if (day != "") d = atoi(day.c_str());
    if (month != "") m = atoi(month.c_str());
    if (year != "") y = atoi(year.c_str());

    this->system->setCurrentDate(d, m, y);

    inputFile.close();
}




Sysadmin::~Sysadmin() {

    ofstream outputFile("system.txt", ios::trunc);

    outputFile  << this->system->getCurrentDate().getDay() << ":"
                << this->system->getCurrentDate().getMonth() << ":"
                << this->system->getCurrentDate().getYear() << endl;

    outputFile.close();
}

void Sysadmin::addDays(int days) {
    return;
}

const shared_ptr<System> &Sysadmin::getSystem() const {
    return system;
}
