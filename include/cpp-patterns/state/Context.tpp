
namespace cpp_patterns {

    template<typename T>
    Context<T>::Context()
    {
    }


    template<typename T>
    void Context<T>::setNewCurrentState(const StatePtr &newCurrentStatePtr)
    {
        if (currentStatePtr != nullptr)
        {
            currentStatePtr->exitAction();
        }

        currentStatePtr = newCurrentStatePtr;
        currentStatePtr->entryAction();
    }


    template<typename T>
    void Context<T>::scheduleEvent(const EventPtr &event)
    {
        eventPtrs.push(event);
    }


    template<typename T>
    void Context<T>::scheduleEvent(uint8_t eventId)
    {
        const auto eventPtr = std::make_shared<Event>(eventId);

        eventPtrs.push(eventPtr);
    }


    template<typename T>
    void Context<T>::run()
    {
        currentStatePtr->doActivity();

        while (!eventPtrs.empty())
        {
            EventPtr event = eventPtrs.front();
            currentStatePtr->handleEvent(event);
            eventPtrs.pop();
        }
    }


    template<typename T>
    void Context<T>::preemptEvents()
    {
        std::queue<EventPtr> newEvents;

        EventPtr currentEventPtr;
        currentEventPtr = eventPtrs.front();
        newEvents.push(currentEventPtr);

        std::swap(eventPtrs, newEvents);
    }


    template<typename T>
    template<typename S>
    bool Context<T>::currentStateIs() const
    {
        return std::dynamic_pointer_cast<S>(currentStatePtr) != nullptr;
    }

}
