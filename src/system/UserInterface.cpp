#include "UserInterface.h"
#include "../bank/StudentsAccount.h"
#include "../bank/PersonalAccount.h"
#include "../bank/JuniorAccount.h"
#include <iostream>
#include <limits>

int UserInterface::askUserLogOrSign() {
    cout << "\033[2J\033[1;1H";
    cout << "" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "---Hello, welcome to bank-simulation sp. z o.o.!---" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "" << endl;
    cout << "Would you like to login or create an account?" << endl;
    cout << "1) Log in" << endl;
    cout << "2) Create an account" << endl;
    cout << "0) Exit" << endl;
    cout << "NUMBER: ";

    return getNumberFromUser(0, 2);
}

int UserInterface::askUserAccountAction() {
    cout << "\033[2J\033[1;1H";
    cout << "" << endl;
    cout << "What do you want to do?" << endl;
    cout << "1) Make transfer" << endl;
    cout << "2) Deposit money" << endl;
    cout << "3) Withdraw money" << endl;
    cout << "4) Change login" << endl;
    cout << "5) Change password" << endl;
    cout << "6) Close account" << endl;
    cout << "0) Go back" << endl;
    cout << "TYPE NUMBER: ";
    return getNumberFromUser(0, 6);
}

shared_ptr<Account> UserInterface::askUserForLoginAccountInfo() {
    string login, password, type;

    cout << "LOG IN:" << endl;
    cout << "" << endl;
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    return shared_ptr<Account>(new StudentsAccount(999999, login, password, 0));

}

shared_ptr<Transfer> UserInterface::askUserForTransferInfo() {
    string recipientNumber, amount, title;
    cout << "TRANSFER DETAILS:" << endl;
    cout << "" << endl;
    cout << "Recipient Number: ";
    cin >> recipientNumber;
    while (atof(amount.c_str()) != 0) {
        cout << "Transfer amount: ";
        cin >> amount;
    }
    cout << "Title: ";
    cin >> title;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    return shared_ptr<Transfer>(new Transfer(title, stoi(recipientNumber), 999999, atof(amount.c_str())));
}

shared_ptr<Account> UserInterface::askUserForNewAccountInfo() {
    string login, password, type;

    cout << "Create new account:" << endl;
    cout << "" << endl;
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    while (type != "s" && type != "j" && type != "p") {
        cout << "Account type (junior, student or personal): [j, s or p]";
        cin >> type;
    }
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    shared_ptr<Account> account = nullptr;

    if (type == "p") account = shared_ptr<Account>(new PersonalAccount(999999, login, password, 0));
    else if (type == "s") account = shared_ptr<Account>(new StudentsAccount(999999, login, password, 0));
    else if (type == "j") account = shared_ptr<Account>(new JuniorAccount(999999, login, password, 0));

    return account;
}

double UserInterface::askUserForDepositInfo() {
    string amount;
    while (atof(amount.c_str()) != 0) {
        cout << "" << endl;
        cout << "How much money would you like to deposit? " << endl;
        cin >> amount;
    }
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    return atof(amount.c_str());
}

double UserInterface::askUserForWithdrawInfo() {
    string amount;
    while (atof(amount.c_str()) != 0) {
        cout << "" << endl;
        cout << "How much money would you like to withdraw? " << endl;
        cin >> amount;
    }
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    return atof(amount.c_str());
}


int UserInterface::getNumberFromUser(int from, int to) {
    string input;
    int inputInt;

    while (true){
        try {
            getline(cin, input); inputInt = stoi(input);
            if (inputInt < from || inputInt > to) { throw 1; }
            break;
        }
        catch (int exception) {
            if (exception == 1) cout << "Invalid input. Try Again: ";
        }
    }
    return inputInt;
}

void UserInterface::displaySuccess() {
    cout << "" << endl;
    cout << "SUCCESS!" << endl;
    cout << "" << endl;
}

void UserInterface::displayFailed() {
    cout << "" << endl;
    cout << "FAILED!" << endl;
    cout << "" << endl;
}

void UserInterface::displayAccountDeails(shared_ptr<Account> account) {
    cout << "LOGGED AS: " << account->getLogin() << " (" << account->getAccountType() << ")" << endl;
    cout << "Your number: " << account->getNumber() << endl;
    cout << "" << endl;
    cout << "Balance: " << account->getBalance() << " (" << account->getBlockedBalance() << " blocked)" << endl;
    cout << "" << endl;
}

bool UserInterface::askUserForPasswordConfirmation(shared_ptr<Account> account) {
    string pass;

    cout << "Confirm your current password: ";
    cin >> pass;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    if(pass == account->getPassword()) {
        cout << "ok!" << endl;
        return true;
    } else {
        cout << "wrong!" << endl;
        return false;
    }

}

string UserInterface::askUserForNewPassword() {
    string pass;

    cout << "Give new password: ";
    cin >> pass;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    return pass;
}

string UserInterface::askUserForNewLogin() {
    string login;

    cout << "Give new login: ";
    cin >> login;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    return login;
}
