
#define BOOST_TEST_DYN_LINK

// 3TH PARTY INCLUDES
#include <boost/test/unit_test.hpp>

// PROJECT INCLUDES
#include <cpp_patterns/state/Context.hpp>
#include "helpers/TestState.hpp"

BOOST_AUTO_TEST_SUITE(state_Context_tests)

    // TODO : test ContextState
    // TODO : test add event(int)
    // TODO : test add event(EventPtr)

    BOOST_AUTO_TEST_CASE(ENTRY_EXIT_ACTION)
    {
        bool entryActionGotCalled = false;
        bool exitActionGotCalled = false;

        auto entryActionFn = [&entryActionGotCalled]() { entryActionGotCalled = true; };
        auto exitActionFn = [&exitActionGotCalled]() { exitActionGotCalled = true; };

        TestStatePtr testState1 = std::make_shared<TestState>();
        testState1->setExitActionFn(exitActionFn);

        TestStatePtr testState2 = std::make_shared<TestState>();
        testState2->setEntryActionFn(entryActionFn);

        cpp_patterns::Context stateMachine;
        stateMachine.changeState(testState1);
        stateMachine.changeState(testState2);

        BOOST_CHECK(entryActionGotCalled);
        BOOST_CHECK(exitActionGotCalled);
    }


    BOOST_AUTO_TEST_CASE(DO_ACTIVITY)
    {

        bool doActivityGotCalled = false;

        auto doActivityFn = [&doActivityGotCalled]() { doActivityGotCalled = true; };

        TestStatePtr testState = std::make_shared<TestState>();
        testState->setDoActivityFn(doActivityFn);

        cpp_patterns::Context stateMachine;
        stateMachine.changeState(testState);
        stateMachine.run();

        BOOST_CHECK(doActivityGotCalled);
    }


    BOOST_AUTO_TEST_CASE(RUN)
    {
        cpp_patterns::Context stateMachine;

        unsigned long handleEventCallCount = 0;

        auto handleEventFn = [&handleEventCallCount]() { handleEventCallCount += 1; };

        TestStatePtr testStatePtr = std::make_shared<TestState>();
        testStatePtr->setHandleEventFn(handleEventFn);
        stateMachine.changeState(testStatePtr);

        stateMachine.scheduleEvent(1);
        stateMachine.run();

        stateMachine.scheduleEvent(1);
        stateMachine.run();

        BOOST_CHECK_EQUAL(handleEventCallCount, 2);
    }


BOOST_AUTO_TEST_SUITE_END()
