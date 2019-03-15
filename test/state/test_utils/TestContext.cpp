
#include "TestContext.hpp"

#include <iostream> // TODO : remove this include

#include "test_state/FirstTestState.hpp"


TestContext::TestContext()
    : Context()
{
}


void TestContext::setStartState()
{
    const auto contextPtr = this->shared_from_this();
    auto startStatePtr = std::make_shared<FirstTestState>(contextPtr);
    setNewCurrentState(startStatePtr);
}
