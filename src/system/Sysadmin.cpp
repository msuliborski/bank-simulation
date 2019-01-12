#include <fstream>
#include <iostream>
#include "Sysadmin.h"


Sysadmin::Sysadmin() {
    shared_ptr<System> system(new System());
    this->system = system;

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

    cout << "dupa" << endl; cout.flush();
    this->system->setCurrentDate(d, m, y);

    cout << system->getCurrentDate().day << endl; cout.flush();
    cout << system->getCurrentDate().month << endl; cout.flush();
    cout << system->getCurrentDate().year << endl; cout.flush();
    inputFile.close();
}



Sysadmin::~Sysadmin() {

    ofstream outputFile("system.txt", ios::trunc);

    outputFile  << this->system->getCurrentDate().day << ":"
                << this->system->getCurrentDate().month << ":"
                << this->system->getCurrentDate().year << endl;

    outputFile.close();
}

void Sysadmin::addDays(int days) {
    for (int i = 0; i < days; i++)
        this->system->addDay();
}

shared_ptr<System> Sysadmin::getSystem() {
    return system;
}
