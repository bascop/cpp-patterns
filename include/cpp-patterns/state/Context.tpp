
namespace patterns {
    namespace state {

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
        void Context<T>::scheduleEvent(const patterns::messages::EventPtr &event)
        {
            eventPtrs.push(event);
        }


        template<typename T>
        void Context<T>::scheduleEvent(uint8_t eventId)
        {
            const auto eventPtr = std::make_shared<patterns::messages::Event>(eventId);

            eventPtrs.push(eventPtr);
        }


        template<typename T>
        void Context<T>::run()
        {
            currentStatePtr->doActivity();

            while (!eventPtrs.empty())
            {
                patterns::messages::EventPtr event = eventPtrs.front();
                currentStatePtr->handleEvent(event);
                eventPtrs.pop();
            }
        }


        template<typename T>
        void Context<T>::preemptEvents()
        {
            std::queue<patterns::messages::EventPtr> newEvents;

            patterns::messages::EventPtr currentEventPtr;
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
}
