#define BOOST_TEST_MODULE test module name
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test) {
    BOOST_CHECK_EQUAL(1, 1);
    BOOST_CHECK_EQUAL(1, 2);
}


