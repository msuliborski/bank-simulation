/**
 * Project Bank
 * @author Michał Suliborski, Anna Preczynska
 * @version 1.0
 */


#ifndef _SIMULATIONLOGIC_H
#define _SIMULATIONLOGIC_H

#include "User.h"


class SimulationLogic {
public: 
    
void identify();
    
void choseBank();
    
void choseAccount();
    
void performOperation();
    
UserInterface display();
private: 
    UserInterface console;
    User system:shared_ptr<User>;
};

#endif //_SIMULATIONLOGIC_H