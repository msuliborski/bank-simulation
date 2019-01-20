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


using namespace std;


BOOST_AUTO_TEST_CASE(test1Test){
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

	shared_ptr<Account> studentsAccount(new StudentsAccount(7777, "studentTest", "studentTest", 300));

	BOOST_CHECK_EQUAL(studentsAccount->getNumber(), 7777);
	BOOST_CHECK_EQUAL(studentsAccount->getPassword(), "studentTest");
	BOOST_CHECK_EQUAL(studentsAccount->getLogin() , "studentTest");
	BOOST_CHECK_EQUAL(studentsAccount->getAccountType(), "student");
	BOOST_CHECK_EQUAL(studentsAccount->getBalance(), 300);
	BOOST_CHECK_EQUAL(studentsAccount->getTransferFee(), 0);


	//personalAccount->makeTransfer(8888, "title", 15);
	//bank->handleTransfers();
	//BOOST_CHECK_EQUAL(personalAccount->getBalance(), 390);
//getBlockedBalance

//	BOOST_CHECK_LE(bank->getNewAccountNumber(), 9999);
//	BOOST_CHECK_GE(bank->getNewAccountNumber(), 1000);

//	bank->addAccount(personalAccount);
//	//bank->addAccount(juniorAccount);
//
//	BOOST_CHECK_EQUAL(bank->checkIfLoginAvailable("login"), true);
//	BOOST_CHECK_EQUAL(bank->checkIfLoginAvailable("newLogin"), false);
//
//	bank->deleteAccount(personalAccount->getNumber());
//	BOOST_CHECK_EQUAL(bank->checkIfLoginAvailable("newLogin"), true);


}

BOOST_AUTO_TEST_CASE(test2Test){

//    shared_ptr<Bank> bank(Bank::GetInstance(1000000));
//    bank->addAccount(shared_ptr<Account>(new PersonalAccount(9999, "a", "a", 500)));
//    bank->addAccount(shared_ptr<Account>(new PersonalAccount(9999, "b", "b", 5200)));


    //personalAccount->makeTransfer(8888, "title", 15);
    //bank->handleTransfers();
    //BOOST_CHECK_EQUAL(personalAccount->getBalance(), 390);
//getBlockedBalance


}
