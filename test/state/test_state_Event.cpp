
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/test_state/test_event/TestEvent.hpp"

BOOST_AUTO_TEST_SUITE(state_Event_tests)


    BOOST_AUTO_TEST_CASE(state_Event_test_id)
    {
        TestEvent testEvent(TestEventType::GO_TO_SECOND_TEST_STATE_EVENT);

        uint32_t id = testEvent.getId();
        uint32_t expectedId = TestEventType::GO_TO_SECOND_TEST_STATE_EVENT;

        BOOST_CHECK_EQUAL(id, expectedId);
    }


BOOST_AUTO_TEST_SUITE_END()
