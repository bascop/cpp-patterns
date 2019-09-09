
#include "SecondTestState.hpp"

#include "FirstTestState.hpp"


SecondTestState::SecondTestState(const TestContextPtr &contextPtr)
    : TestState(contextPtr)
{
}


bool SecondTestState::handleEvent(const cpp_patterns::EventPtr &eventPtr)
{
    switch (eventPtr->getId())
    {
        case TestEventType::GO_TO_FIRST_TEST_STATE_EVENT:
            return onGoToFirstTestState();

        default:
            return TestState::handleEvent(eventPtr);
    }
}


bool SecondTestState::onGoToFirstTestState() const
{
    contextPtr->setNewCurrentState(std::make_shared<FirstTestState>(contextPtr));
    return true;
}
