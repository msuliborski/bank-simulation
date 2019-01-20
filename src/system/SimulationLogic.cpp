#include "SimulationLogic.h"
#include "../bank/Bank.h"
#include "UserInterface.h"
#include "iostream"
#include <unistd.h>

void SimulationLogic::simulate() {
    shared_ptr<Bank> bank(Bank::GetInstance(1000000));
    this->bank = bank;

    shared_ptr<UserInterface> ui(new UserInterface());
    this->ui = ui;
    ui->setBank(bank);

    shared_ptr<Account> currentAccount = nullptr;
    shared_ptr<Account> trash = nullptr;
    int logOrSign = -1;
    while (true) {
        if (logOrSign == -1) logOrSign = ui->askUserLogOrSign();
        if (logOrSign == 1) { //log in
            if (currentAccount == nullptr) currentAccount = logIn();
            if (currentAccount == nullptr) continue;
            int accountAction = -1;
            while (true) {
                ui->displayAccountDetails(currentAccount);
                bank->displayAccounts();
                accountAction = ui->askUserAccountAction();
                if (accountAction == 1) {//transfer
                    makeTransfer(currentAccount);
                } else if (accountAction == 2) {//Deposit money
                    depositMoney(currentAccount);
                } else if (accountAction == 3) {//Withdraw money
                    withdrawMoney(currentAccount);
                } else if (accountAction == 4) {//Change login
                    changeLogin(currentAccount);
                } else if (accountAction == 5) {//Change password
                    changePassword(currentAccount);
                } else if (accountAction == 6) {//Close account
                    closeAccount(currentAccount);
                    trash = currentAccount;
                    currentAccount = nullptr;
                    logOrSign = -1;
                    break;
                } else if (accountAction == 0) { //go back
                    trash = currentAccount;
                    currentAccount = nullptr;
                    logOrSign = -1;
                    break;
                }
            }
        }
        else if (logOrSign == 2) { //create an account
            currentAccount = createAccount();
            logOrSign = 1;
            continue;
        }
        else if (logOrSign == 0) {//exit
            bank->saveAccountState();
            break;
        }
        bank->handleTransfers();
    }
}

shared_ptr<Account> SimulationLogic::logIn() {

    shared_ptr<Account> account = ui->askUserForLoginAccountInfo();

    account = bank->getAccountIfCredentialsMatch(account);

    if(account != nullptr)
        ui->displaySuccess();
    else
        ui->displayFailed();
    return account;
}

void SimulationLogic::makeTransfer(shared_ptr<Account> account){

    shared_ptr<Transfer> transfer = ui->askUserForTransferInfo();

    if(account->makeTransfer(transfer->getRecipientNumber(), transfer->getTitle(), transfer->getAmount()))
        ui->displaySuccess();
    else ui->displayFailed();
}


void SimulationLogic::depositMoney(shared_ptr<Account> account) {
    if(account->deposit(ui->askUserForDepositInfo()))
        ui->displaySuccess();
    else ui->displayFailed();
}

void SimulationLogic::withdrawMoney(shared_ptr<Account> account) {

    double amount = ui->askUserForWithdrawInfo();

    if(account->withdraw(amount))
        ui->displaySuccess();
    else ui->displayFailed();
}

void SimulationLogic::changeLogin(shared_ptr<Account> account) {
    if (ui->askUserForPasswordConfirmation(account)){
        account->changeLogin(ui->askUserForNewLogin());
        ui->displaySuccess();
    } else {
        ui->displayFailed();
    }
}

void SimulationLogic::changePassword(shared_ptr<Account> account) {
    if (ui->askUserForPasswordConfirmation(account)){
        account->changePassword(ui->askUserForNewPassword());
        ui->displaySuccess();
    } else {
        ui->displayFailed();
    }
}

void SimulationLogic::closeAccount(shared_ptr<Account> account) {
    if (ui->askUserForPasswordConfirmation(account)){
        if (account->closeAccount())
            ui->displaySuccess();
        else ui->displayFailed();
    } else {
        ui->displayFailed();
    }
}
shared_ptr<Account> SimulationLogic::createAccount() {
    shared_ptr<Account> account = ui->askUserForNewAccountInfo();
    bank->addAccount(account);

    ui->displaySuccess();

    return account;
}

void SimulationLogic::setBank(shared_ptr<Bank> bank) {
    this->bank = bank;
}
