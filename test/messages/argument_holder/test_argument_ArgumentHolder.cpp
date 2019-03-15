
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/TestArgumentHolder.hpp"

using namespace patterns::messages;

BOOST_AUTO_TEST_SUITE(argument_ArgumentHolder_tests)


    BOOST_AUTO_TEST_CASE(argument_ArgumentHolder_test_getArgument)
    {
        TestArgumentHolder testArgumentHolder;

        testArgumentHolder.addArgument<uint16_t>(324);
        const auto argumentPtr = testArgumentHolder.getArgument<uint16_t>(0);

        BOOST_ASSERT(argumentPtr != nullptr);
        BOOST_CHECK_EQUAL(*argumentPtr, 324);
    }


    BOOST_AUTO_TEST_CASE(argument_ArgumentHolder_test_addArgument)
    {
        TestArgumentHolder testArgumentHolder;

        for (uint8_t i = 1; i < 4; ++i)
        {
            uint16_t value = i + static_cast<uint8_t>(100);
            uint16_t argumentIndex = i - static_cast<uint8_t>(1);

            BOOST_CHECK_EQUAL(testArgumentHolder.getNumberOfArguments(), argumentIndex);

            testArgumentHolder.addArgument<uint16_t>(value);
            const auto argumentPtr = testArgumentHolder.getArgument<uint16_t>(argumentIndex);

            BOOST_ASSERT(argumentPtr != nullptr);
            BOOST_CHECK_EQUAL(*argumentPtr, value);
            BOOST_CHECK_EQUAL(testArgumentHolder.getNumberOfArguments(), i);
        }
    }


    BOOST_AUTO_TEST_CASE(argument_ArgumentHolder_test_getNumberOfArguments)
    {
        TestArgumentHolder testArgumentHolder;

        testArgumentHolder.addArgument<uint16_t>(324);
        const auto numberOfArguments = testArgumentHolder.getNumberOfArguments();

        BOOST_CHECK_EQUAL(numberOfArguments, 1);
    }


    BOOST_AUTO_TEST_CASE(argument_ArgumentHolder_test_getArgument_out_of_bound)
    {
        TestArgumentHolder testArgumentHolder;

        const auto argumentPtr = testArgumentHolder.getArgument<uint16_t>(0);

        BOOST_CHECK_EQUAL(argumentPtr, nullptr);
    }


BOOST_AUTO_TEST_SUITE_END()
