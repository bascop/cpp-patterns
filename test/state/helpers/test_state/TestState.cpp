
#include "TestState.hpp"


TestState::TestState(const std::shared_ptr<TestContext> &contextPtr)
    : ContextState(contextPtr)
{
}


bool TestState::handleEvent(const patterns::messages::EventPtr &eventPtr)
{
    switch (eventPtr->getId())
    {
        case TestEventType::PREEMPT_EVENTS_EVENT:
            return onPreemptEventsEvent();

        default:
            return ContextState::handleEvent(eventPtr);
    }
}


bool TestState::onPreemptEventsEvent() const
{
    contextPtr->preemptEvents();
    return true;
}