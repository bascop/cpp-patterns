
#include "TestState.hpp"


TestState::TestState()
    : entryActionFn(nullptr),
      doActivityFn(nullptr),
      exitActionFn(nullptr),
      handleEventFn(nullptr)
{
}


void TestState::entryAction()
{
    if (entryActionFn != nullptr)
    {
        entryActionFn();
    }
}


void TestState::doActivity()
{
    if (doActivityFn != nullptr)
    {
        doActivityFn();
    }
}


void TestState::exitAction()
{
    if (exitActionFn != nullptr)
    {
        exitActionFn();
    }
}


bool TestState::handleEvent(const cpp_patterns::EventPtr &/*eventPtr*/)
{
    if (handleEventFn != nullptr)
    {
        handleEventFn();
    }

    return true;
}


void TestState::setEntryActionFn(const EntryFn &entryFn)
{
    TestState::entryActionFn = entryFn;
}


void TestState::setDoActivityFn(const DoFn &doFn)
{
    TestState::doActivityFn = doFn;
}


void TestState::setExitActionFn(const ExitFn &exitFn)
{
    TestState::exitActionFn = exitFn;
}


void TestState::setHandleEventFn(const HandleEventFn &handleEventFn)
{
    TestState::handleEventFn = handleEventFn;
}
