#include <iostream>
#include <string>
#include <memory>
#include <cmath>
#include <cstdlib>

#include "bank/User.h"
#include "bank/System.h"
#include "bank/Bank.h"
#include "bank/StudentsAccount.h"

void depositMoney(shared_ptr<Account> shared_ptr);

void withdrawMoney(shared_ptr<Account> shared_ptr);

void changeLogin(shared_ptr<Account> shared_ptr);

using namespace std;


int getNumberFromUser(int from, int to) {
	string input; int inputInt;
	while (true){
		try {
			getline(cin, input); inputInt = atoi(input.c_str());
			if (input.length() != ((int)(log10(inputInt)) + 1)) { throw 1; }
			else if (inputInt < from || inputInt > to) { throw 1; }
			break;
		}
		catch (int exception) {
			if (exception == 1) cout << "Invalid input. Try Again: ";
		}
	}
	return inputInt;
}

int askUserLogOrSign() {
	cout << "\033[2J\033[1;1H";
	cout << "---------------------------------------------------" << endl;
	cout << "---Hello, welcome to bank-simulation sp. z o.o.!---" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "Would you like to login or create an account?" << endl;
	cout << "1) Log in" << endl;
	cout << "2) Create an account" << endl;
	cout << "0) Exit" << endl;
	cout << "TYPE NUMBER: ";

	return getNumberFromUser(0, 2);
}
int askUserAccountAction() {
	cout << "\033[2J\033[1;1H";
	cout << "" << endl;
	cout << "What do you want to do?" << endl;
	cout << "1) Make transfer" << endl;
	cout << "2) Deposit money" << endl;
	cout << "3) Withdraw money" << endl;
	cout << "4) Change login" << endl;
	cout << "5) Change password" << endl;
	cout << "6) Change number" << endl;
	cout << "7) Change name" << endl;
	cout << "8) Close account" << endl;
	cout << "0) Go back" << endl;
	cout << "TYPE NUMBER: ";

	return getNumberFromUser(0, 8);
}

shared_ptr<Account> logIn() {
	string login;
	string password;
	cout << "LOG IN:" << endl;
	cout << "Login: ";
	cin >> login;
	cout << "Password: ";
	cin >> password;


	shared_ptr<Account> account(new StudentsAccount("a", "a", "a", "a", 1));
	return account;
}

void makeTransfer(shared_ptr<Account> account){

}


void depositMoney(shared_ptr<Account> account) {

}

void withdrawMoney(shared_ptr<Account> account) {

}

void changeLogin(shared_ptr<Account> account) {

}

void changePassword(shared_ptr<Account> account) {

}

void changeNumber(shared_ptr<Account> account) {

}

void changeName(shared_ptr<Account> account) {

}

void closeAccount(shared_ptr<Account> account) {

}

int main (int argc, char *argv[]) {

    //enclose some instruction in "logic" class
    //enclose couts in "gui" class

	shared_ptr<Account> currentAccount;



    int logOrSign = 0;
	while (true) {
		logOrSign = askUserLogOrSign();
		if(logOrSign == 1) { //log in
			currentAccount = logIn();
			int accountAction = 0;
			while (true) {
				accountAction = askUserAccountAction();
				if(accountAction == 1) {//transfer
					makeTransfer(currentAccount);
				}
				else if(accountAction == 2) {//Deposit money
					depositMoney(currentAccount);
				}
				else if(accountAction == 3) {//Withdraw money
					withdrawMoney(currentAccount);
				}
				else if(accountAction == 4) {//Change login
					changeLogin(currentAccount);
				}
				else if(accountAction == 5) {//Change password
					changePassword(currentAccount);
				}
				else if(accountAction == 6) { //change number
					changeNumber(currentAccount);
				}
				else if(accountAction == 7) {//Change name
					changeName(currentAccount);
				}
				else if(accountAction == 8) {//Close account
					closeAccount(currentAccount);
				}
				else if(accountAction == 0) { //go back
					break;
				}
			}
		}
		if(logOrSign == 2) { //create an account
			break;
		}
		if(logOrSign == 0) {//exit
			break;
		}
	}

	return 0;
}

