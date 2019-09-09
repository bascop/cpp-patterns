
#define BOOST_TEST_DYN_LINK

// 3TH PARTY INCLUDES
#include <boost/test/unit_test.hpp>

// PROJECT INCLUDES
#include "test_utils/TestArgumentHolder.hpp"

BOOST_AUTO_TEST_SUITE(argument_ArgumentHolder_tests)

    // TODO : test get out of range argument (> numberOfArguments)
    // TODO : test get out of range argument (< 0)

    BOOST_AUTO_TEST_CASE(argument_ArgumentHolder_test_addArgument)
    {
        TestArgumentHolder argumentHolder;

        uint8_t numberOfArguments = 4;
        for (uint8_t i = 1; i < numberOfArguments; ++i)
        {
            uint16_t expectedArgumentValue = i + 100;
            uint16_t argumentIndex = i - 1;

            argumentHolder.addArgument<uint16_t>(expectedArgumentValue);
            const auto resultArgumentValue = argumentHolder.getArgumentByIndex<uint16_t>(argumentIndex);

            BOOST_CHECK_EQUAL(expectedArgumentValue, resultArgumentValue);
            BOOST_CHECK_EQUAL(argumentHolder.getNumberOfArguments(), i);
        }
    }


BOOST_AUTO_TEST_SUITE_END()
