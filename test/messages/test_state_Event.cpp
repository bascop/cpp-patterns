
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/TestEvent.hpp"

BOOST_AUTO_TEST_SUITE(state_Event_tests)


    BOOST_AUTO_TEST_CASE(state_Event_test_id)
    {
        uint8_t expectedEventId = 35;
        TestEvent testEvent(expectedEventId);

        uint32_t eventId = testEvent.getId();

        BOOST_CHECK_EQUAL(eventId, expectedEventId);
    }


BOOST_AUTO_TEST_SUITE_END()
