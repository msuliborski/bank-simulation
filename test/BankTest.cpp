#include <boost/test/unit_test.hpp>
#include <cstring>
#include <cmath>
#include <cstddef>
#include <cstddef>
#include "../src/bank/Bank.h"
#include "../src/system/SimulationLogic.h"
#include "../src/system/UserInterface.h"
#include "../src/bank/PersonalAccount.h"
#include "../src/bank/JuniorAccount.h"
#include "../src/bank/StudentsAccount.h"
#include "../src/bank/Transfer.h"


using namespace std;

BOOST_AUTO_TEST_CASE(checkAccounts){

	shared_ptr<Bank> bank(Bank::GetInstance(1000000));

	shared_ptr<Account> personalAccount(new PersonalAccount(9999, "test", "test", 500));

	BOOST_CHECK_EQUAL(personalAccount->getNumber(), 9999);
	BOOST_CHECK_EQUAL(personalAccount->getPassword(), "test");
	BOOST_CHECK_EQUAL(personalAccount->getLogin() , "test");
	BOOST_CHECK_EQUAL(personalAccount->getAccountType(), "personal");
	BOOST_CHECK_EQUAL(personalAccount->getBalance(), 500);
	BOOST_CHECK_EQUAL(personalAccount->getTransferFee(), 5);

	personalAccount->withdraw(120);
	BOOST_CHECK_EQUAL(personalAccount->getBalance(), 380);

	personalAccount->deposit(30);
	BOOST_CHECK_EQUAL(personalAccount->getBalance(), 410);

	personalAccount->changeLogin("newLogin");
	BOOST_CHECK_EQUAL(personalAccount->getLogin() , "newLogin");

	personalAccount->changePassword("newPassword");
	BOOST_CHECK_EQUAL(personalAccount->getPassword() , "newPassword");

	shared_ptr<Account> juniorAccount(new JuniorAccount(8888, "juniorTest", "juniorTest", 700));

	BOOST_CHECK_EQUAL(juniorAccount->getNumber(), 8888);
	BOOST_CHECK_EQUAL(juniorAccount->getPassword(), "juniorTest");
	BOOST_CHECK_EQUAL(juniorAccount->getLogin() , "juniorTest");
	BOOST_CHECK_EQUAL(juniorAccount->getAccountType(), "junior");
	BOOST_CHECK_EQUAL(juniorAccount->getBalance(), 700);
	BOOST_CHECK_EQUAL(juniorAccount->getTransferLimit(), 500);

	BOOST_CHECK_EQUAL(juniorAccount->makeTransfer(9999, "title", 510), false);

    juniorAccount->withdraw(100);
    BOOST_CHECK_EQUAL(juniorAccount->getBalance(), 600);

    juniorAccount->deposit(30);
    BOOST_CHECK_EQUAL(juniorAccount->getBalance(), 630);

    juniorAccount->changeLogin("jTest");
    BOOST_CHECK_EQUAL(juniorAccount->getLogin() , "jTest");

    juniorAccount->changePassword("newPassword");
    BOOST_CHECK_EQUAL(juniorAccount->getPassword() , "newPassword");

	shared_ptr<Account> studentsAccount(new StudentsAccount(7777, "studentTest", "studentTest", 300));

	BOOST_CHECK_EQUAL(studentsAccount->getNumber(), 7777);
	BOOST_CHECK_EQUAL(studentsAccount->getPassword(), "studentTest");
	BOOST_CHECK_EQUAL(studentsAccount->getLogin() , "studentTest");
	BOOST_CHECK_EQUAL(studentsAccount->getAccountType(), "student");
	BOOST_CHECK_EQUAL(studentsAccount->getBalance(), 300);
	BOOST_CHECK_EQUAL(studentsAccount->getTransferFee(), 0);

    studentsAccount->withdraw(100);
    BOOST_CHECK_EQUAL(studentsAccount->getBalance(), 200);

    studentsAccount->deposit(30);
    BOOST_CHECK_EQUAL(studentsAccount->getBalance(), 230);

    studentsAccount->changeLogin("sTest");
    BOOST_CHECK_EQUAL(studentsAccount->getLogin() , "sTest");

    studentsAccount->changePassword("newPassword");
    BOOST_CHECK_EQUAL(studentsAccount->getPassword() , "newPassword");


	for (int i = 0; i < 1000; i++) {
		BOOST_CHECK_LE(bank->getNewAccountNumber(), 9999);
		BOOST_CHECK_GE(bank->getNewAccountNumber(), 1000);
	}

}

BOOST_AUTO_TEST_CASE(checkTransfers){

    Transfer transfer("title", 9999, 8888, 20);

    BOOST_CHECK_EQUAL(transfer.getTitle(), "title");
    BOOST_CHECK_EQUAL(transfer.getRecipientNumber(), 9999);
    BOOST_CHECK_EQUAL(transfer.getSenderNumber(), 8888);
    BOOST_CHECK_EQUAL(transfer.getAmount(), 20);
}
