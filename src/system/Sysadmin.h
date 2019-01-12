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

    const shared_ptr<System> &getSystem() const;
};

#endif //_SYSADMIN_H