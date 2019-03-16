

#ifndef CPP_PATTERNS_TESTEVENT_HPP
#define CPP_PATTERNS_TESTEVENT_HPP

#include <cpp-patterns/messages/Event.hpp>


class TestEvent : public patterns::messages::Event
{
public:
    explicit TestEvent(uint8_t id);

    virtual ~TestEvent() = default;
};


#endif //CPP_PATTERNS_TESTEVENT_HPP
