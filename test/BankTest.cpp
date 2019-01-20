#include <boost/test/unit_test.hpp>
#include <cstring>
#include <cmath>
#include <cstddef>
#include <cstddef>
#include "../src/bank/Bank.h"
#include "../src/system/SimulationLogic.h"
#include "../src/system/UserInterface.h"
#include "../src/bank/PersonalAccount.h"

using namespace std;


BOOST_AUTO_TEST_CASE(test1Test){
	shared_ptr<Bank> bank(Bank::GetInstance(1000000));

	shared_ptr<Account> account(new PersonalAccount(9999, "test", "test", 500));

	BOOST_CHECK_EQUAL(account->getPassword(), "test");
	BOOST_CHECK_EQUAL(account->getAccountType(), "personal");
	//login
	//kase
	BOOST_CHECK_LE(bank->getNewAccountNumber(), 9999);
	BOOST_CHECK_GE(bank->getNewAccountNumber(), 1000);
	BOOST_CHECK_GE(1, 1);
	BOOST_CHECK_LT(1, 2);
	BOOST_CHECK_GT(2, 1);
	BOOST_CHECK(true);


	BOOST_REQUIRE_EQUAL(1, 1);
	BOOST_REQUIRE_CLOSE_FRACTION(1.0001, 1, 1.0002);
}

BOOST_AUTO_TEST_CASE(test2Test){

	BOOST_CHECK_THROW(throw "error", const char *);
}
