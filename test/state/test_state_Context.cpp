
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/TestContext.hpp"
#include "test_utils/test_state/FirstTestState.hpp"
#include "test_utils/test_state/SecondTestState.hpp"

BOOST_AUTO_TEST_SUITE(state_Context_tests)


    BOOST_AUTO_TEST_CASE(state_Context_test_currentStateIs)
    {
        TestContextPtr testContextPtr = std::make_shared<TestContext>();
        testContextPtr->setStartState();

        BOOST_CHECK_EQUAL(testContextPtr->currentStateIs<FirstTestState>(), true);
        BOOST_CHECK_EQUAL(testContextPtr->currentStateIs<SecondTestState>(), false);
    }


    BOOST_AUTO_TEST_CASE(state_Context_test_setStartState)
    {
        TestContextPtr testContextPtr = std::make_shared<TestContext>();
        testContextPtr->setStartState();

        BOOST_CHECK(testContextPtr->currentStateIs<FirstTestState>());
    }


    BOOST_AUTO_TEST_CASE(state_Context_test_run)
    {
        TestContextPtr testContextPtr = std::make_shared<TestContext>();
        testContextPtr->setStartState();

        BOOST_ASSERT(testContextPtr->currentStateIs<FirstTestState>());

        testContextPtr->scheduleEvent(TestEventType::GO_TO_SECOND_TEST_STATE_EVENT);
        testContextPtr->run();

        BOOST_CHECK(testContextPtr->currentStateIs<SecondTestState>());

        testContextPtr->scheduleEvent(TestEventType::GO_TO_FIRST_TEST_STATE_EVENT);
        testContextPtr->run();

        BOOST_CHECK(testContextPtr->currentStateIs<FirstTestState>());
    }


    BOOST_AUTO_TEST_CASE(state_Context_test_preempt)
    {
        TestContextPtr testContextPtr = std::make_shared<TestContext>();
        testContextPtr->setStartState();

        BOOST_ASSERT(testContextPtr->currentStateIs<FirstTestState>());

        testContextPtr->scheduleEvent(TestEventType::PREEMPT_EVENTS_EVENT);
        testContextPtr->scheduleEvent(TestEventType::GO_TO_SECOND_TEST_STATE_EVENT);
        testContextPtr->scheduleEvent(TestEventType::GO_TO_FIRST_TEST_STATE_EVENT);
        testContextPtr->scheduleEvent(TestEventType::GO_TO_SECOND_TEST_STATE_EVENT);

        testContextPtr->run();

        BOOST_CHECK(testContextPtr->currentStateIs<FirstTestState>());
    }


BOOST_AUTO_TEST_SUITE_END()
