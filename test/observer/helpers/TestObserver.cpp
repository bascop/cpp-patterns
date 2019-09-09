
// HEADER INCLUDE
#include "TestObserver.hpp"


TestObserver::TestObserver()
    : onNotificationFn(nullptr),
      onNotificationWithEventFn(nullptr)
{
}


TestObserver::TestObserver(
    const TestObserver::OnNotificationFn &onNotificationFn)
    : onNotificationFn(onNotificationFn),
      onNotificationWithEventFn(nullptr)
{
}


TestObserver::TestObserver(
    const TestObserver::OnNotificationWithEventFn &onNotificationWithEventFn)
    : onNotificationFn(nullptr),
      onNotificationWithEventFn(onNotificationWithEventFn)
{
}


TestObserver::TestObserver(
    const TestObserver::OnNotificationFn &onNotificationFn,
    const TestObserver::OnNotificationWithEventFn &onNotificationWithEventFn)
    : onNotificationFn(onNotificationFn),
      onNotificationWithEventFn(onNotificationWithEventFn)
{
}


void TestObserver::onNotification(const cpp_patterns::EventPtr &eventPtr)
{
    if (onNotificationFn != nullptr)
    {
        onNotificationFn();
    }

    if (onNotificationWithEventFn != nullptr && eventPtr != nullptr)
    {
        onNotificationWithEventFn(eventPtr);
    }
}
