#include <iostream>
#include <string>
#include <memory>
#include <cstdlib>

#include "system/User.h"
#include "system/Sysadmin.h"

using namespace std;



int main (int argc, char *argv[]) {

    //enclose some instruction in "logic" class
    //enclose couts in "gui" class


    shared_ptr<Sysadmin> sysadmin(new Sysadmin());
    shared_ptr<System> system = sysadmin->getSystem();
    shared_ptr<User> currentUser;

	string name;

	cout << "Hello!" << endl;
	cout << "Your name: " << endl;
	cin >> name;

    currentUser = system->getUser(name);

    //getMissingInfo?
    //askWhatToDo?



	return 0;
}
