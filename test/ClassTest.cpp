#include <boost/test/unit_test.hpp>
#include <cstring>
#include <cmath>
#include <cstddef>

using namespace std;


BOOST_AUTO_TEST_CASE(test1Test){
	BOOST_CHECK(true);
	BOOST_CHECK_EQUAL(1, 1);
	BOOST_CHECK_LE(1, 1);
	BOOST_CHECK_GE(1, 1);
	BOOST_CHECK_LT(1, 2);
	BOOST_CHECK_GT(2, 1);


	BOOST_REQUIRE_EQUAL(1, 2);
	BOOST_REQUIRE_CLOSE_FRACTION(1.0001, 1, 1.0002);
}

BOOST_AUTO_TEST_CASE(test2Test){

	BOOST_CHECK_THROW(throw "error", const char *);
}
