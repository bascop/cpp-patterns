

#ifndef CPP_PATTERNS_TESTSTATE_HPP
#define CPP_PATTERNS_TESTSTATE_HPP

#include <cpp-patterns/state/ContextState.hpp>

#include "../TestContext.hpp"
#include "test_event/TestEvent.hpp"


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
