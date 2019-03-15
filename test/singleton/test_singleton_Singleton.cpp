
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/TestSingleton.hpp"

BOOST_AUTO_TEST_SUITE(singleton_Singleton_tests)


    BOOST_AUTO_TEST_CASE(singleton_Singleton_test_getInstance)
    {
        const auto instancePtr = TestSingleton::getInstance();

        BOOST_CHECK_NE(instancePtr, nullptr);
    }


    BOOST_AUTO_TEST_CASE(singleton_Singleton_test_i)
    {
        const auto instancePtr = TestSingleton::i();

        BOOST_CHECK_NE(instancePtr, nullptr);
    }


    BOOST_AUTO_TEST_CASE(singleton_Singleton_test_instance_from_getInstance)
    {
        uint32_t expectedNumber = 10;

        TestSingleton::getInstance()->setNumber(expectedNumber);
        uint32_t number = TestSingleton::getInstance()->getNumber();

        BOOST_CHECK_EQUAL(number, expectedNumber);
    }


    BOOST_AUTO_TEST_CASE(singleton_Singleton_test_instance_from_i)
    {
        uint32_t expectedNumber = 10;

        TestSingleton::getInstance()->setNumber(expectedNumber);
        uint32_t number = TestSingleton::i()->getNumber();

        BOOST_CHECK_EQUAL(number, expectedNumber);
    }


BOOST_AUTO_TEST_SUITE_END()
