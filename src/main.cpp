#include <iostream>
#include <string>
#include <memory>
#include <cmath>
#include <cstdlib>

#include "bank/User.h"
#include "bank/Bank.h"
#include "bank/StudentsAccount.h"
#include "system/SimulationLogic.h"
#include "system/UserInterface.h"

using namespace std;

shared_ptr<Bank> bank;

int main (int argc, char *argv[]) {

	shared_ptr<SimulationLogic> logic(new SimulationLogic());
	logic->simulate();

	return 0;
}

