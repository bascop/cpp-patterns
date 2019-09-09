
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/TestSingleton.hpp"

BOOST_AUTO_TEST_SUITE(singleton_Singleton_tests)


    BOOST_AUTO_TEST_CASE(singleton_Singleton_test_instance_from_getInstance)
    {
        uint32_t expectedNumber = 10;

        TestSingleton::getInstance()->setNumber(expectedNumber);
        uint32_t resultNumber = TestSingleton::getInstance()->getNumber();

        BOOST_CHECK_EQUAL(expectedNumber, resultNumber);
    }


BOOST_AUTO_TEST_SUITE_END()
