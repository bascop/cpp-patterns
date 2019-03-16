

#ifndef CPP_PATTERNS_TESTSTATE_HPP
#define CPP_PATTERNS_TESTSTATE_HPP

#include <cpp-patterns/state/ContextState.hpp>

#include "../TestContext.hpp"
#include "../../../messages/test_utils/TestEvent.hpp"

enum TestEventType
{
    GO_TO_SECOND_TEST_STATE_EVENT,
    GO_TO_FIRST_TEST_STATE_EVENT,
    PREEMPT_EVENTS_EVENT
};


class TestState
    : public patterns::state::ContextState<TestContext>
{
public:
    explicit TestState(const std::shared_ptr<TestContext> &contextPtr);

    virtual ~TestState() = default;

    bool handleEvent(const patterns::messages::EventPtr &eventPtr) override;

private:
    bool onPreemptEventsEvent() const;
};


#endif //CPP_PATTERNS_TESTSTATE_HPP
