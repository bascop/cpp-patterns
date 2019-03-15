

#include "FirstTestState.hpp"

#include "SecondTestState.hpp"


FirstTestState::FirstTestState(const std::shared_ptr<TestContext> &contextPtr)
    : TestState(contextPtr)
{
}


bool FirstTestState::handleEvent(const patterns::messages::EventPtr &eventPtr)
{
    switch (eventPtr->getId())
    {
        case TestEventType::GO_TO_SECOND_TEST_STATE_EVENT:
            return onGoToSecondTestState();

        default:
            return TestState::handleEvent(eventPtr);
    }
}


bool FirstTestState::onGoToSecondTestState() const
{
    contextPtr->setNewCurrentState(std::make_shared<SecondTestState>(contextPtr));
    return true;
}