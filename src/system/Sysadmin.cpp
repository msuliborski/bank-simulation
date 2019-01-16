//#include <fstream>
//#include <iostream>
//#include "Sysadmin.h"
//
//
//Sysadmin::Sysadmin() {
//    shared_ptr<System> system(new System());
//    this->system = system;
//
//    ifstream inputFile;
//    inputFile.open("system-date.txt", ios::out);
//    string tempLine;
//
//    getline(inputFile, tempLine);
//    int i = 0;
//    string day, month, year;
//    int d = 0;
//
//    while (i < tempLine.length()) {
//        day += tempLine[i]; i++;
//        if ((char)tempLine[i] == ':') { i++; break; }
//    }
////
////    while (i < tempLine.length()) {
////        month += tempLine[i]; i++;
////        if ((char)tempLine[i] == ':') { i++; break; }
////    }
////
////    while (i < tempLine.length()) {
////        year += tempLine[i]; i++;
////        if ((char)tempLine[i] == ':') break;
////    }
//
//    if (!day.empty()) d = atoi(day.c_str());
////    if (month != "") m = atoi(month.c_str());
////    if (year != "") y = atoi(year.c_str());
//
//    this->system->setCurrentDay(d);
//
//    inputFile.close();
//}
//
//
//
//Sysadmin::~Sysadmin() {
//
//    ofstream outputFile("system-date.txt", ios::trunc);
//
//    outputFile  << this->system->getCurrentDay() << endl;
//
//    outputFile.close();
//}
//
//void Sysadmin::addDays(int days) {
//    for (int i = 0; i < days; i++)
//        this->system->addDay();
//}
//
//shared_ptr<System> Sysadmin::getSystem() {
//    return system;
//}
