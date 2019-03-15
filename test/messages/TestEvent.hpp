

#ifndef CPP_PATTERNS_TESTEVENT_HPP
#define CPP_PATTERNS_TESTEVENT_HPP

#include <cpp-patterns/messages/Event.hpp>

enum TestEventType
{
    GO_TO_SECOND_TEST_STATE_EVENT,
    GO_TO_FIRST_TEST_STATE_EVENT,
    PREEMPT_EVENTS_EVENT
};


class TestEvent : public patterns::messages::Event
{
public:
    TestEvent(uint8_t id);

    virtual ~TestEvent() = default;
};


#endif //CPP_PATTERNS_TESTEVENT_HPP
