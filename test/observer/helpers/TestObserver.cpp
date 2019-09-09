
#include "TestObserver.hpp"


TestObserver::TestObserver()
    : Observer(),
      notified(false),
      lastEventPtr(nullptr)
{
}

void TestObserver::notify(const patterns::messages::EventPtr &eventPtr)
{
    notified = true;
    lastEventPtr = eventPtr;
}


bool TestObserver::gotNotified() const
{
    return notified;
}


const patterns::messages::EventPtr &TestObserver::getLastEventPtr() const
{
    return lastEventPtr;
}
