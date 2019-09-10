
#include <cpp-patterns/state/Context.hpp>

namespace cpp_patterns {

    void Context::changeState(const StatePtr &newCurrentStatePtr)
    {
        if (currentStatePtr != nullptr)
        {
            currentStatePtr->exitAction();
        }

        currentStatePtr = newCurrentStatePtr;
        currentStatePtr->entryAction();
    }


    void Context::setStartState(const StatePtr &statePtr)
    {
        changeState(statePtr);
    }


    void Context::scheduleEvent(const EventPtr &event)
    {
        eventPtrs.push(event);
    }


    void Context::scheduleEvent(uint8_t eventId)
    {
        const auto eventPtr = std::make_shared<Event>(eventId);

        scheduleEvent(eventPtr);
    }


    void Context::run()
    {
        currentStatePtr->doActivity();

        while (!eventPtrs.empty())
        {
            EventPtr event = eventPtrs.front();
            currentStatePtr->handleEvent(event);
            eventPtrs.pop();
        }
    }


    void Context::preemptEvents()
    {
        std::queue<EventPtr> newEvents;

        EventPtr currentEventPtr;
        currentEventPtr = eventPtrs.front();
        newEvents.push(currentEventPtr);

        std::swap(eventPtrs, newEvents);
    }

}
