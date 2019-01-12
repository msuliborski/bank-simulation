#ifndef _SYSADMIN_H
#define _SYSADMIN_H

#include "System.h"

class Sysadmin {
private:
    shared_ptr<System> system;

public:
    Sysadmin();
    ~Sysadmin();
    void addDays(int days);

    shared_ptr<System> getSystem();
};

#endif //_SYSADMIN_H