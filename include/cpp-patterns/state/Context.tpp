
namespace patterns {
    namespace state {

        template<typename T>
        Context<T>::Context()
        {
        }


        template<typename T>
        void Context<T>::setNewCurrentState(const StatePtr &newCurrentStatePtr)
        {
            if (currentState != nullptr)
            {
                currentState->exitAction();
            }

            currentState = newCurrentStatePtr;
            currentState->entryAction();
        }


        template<typename T>
        void Context<T>::scheduleEvent(const patterns::messages::EventPtr &event)
        {
            events.push(event);
        }


        template<typename T>
        void Context<T>::scheduleEvent(uint8_t eventId)
        {
            const auto eventPtr = std::make_shared<patterns::messages::Event>(eventId);

            events.push(eventPtr);
        }


        template<typename T>
        void Context<T>::run()
        {
            currentState->doActivity();

            while (!events.empty())
            {
                patterns::messages::EventPtr event = events.front();
                currentState->handleEvent(event);
                events.pop();
            }
        }


        template<typename T>
        void Context<T>::preemptEvents()
        {
            std::queue<patterns::messages::EventPtr> newEvents;

            patterns::messages::EventPtr currentEventPtr;
            currentEventPtr = events.front();
            newEvents.push(currentEventPtr);

            std::swap(events, newEvents);
        }


        template<typename T>
        template<typename S>
        bool Context<T>::currentStateIs() const
        {
            return std::dynamic_pointer_cast<S>(currentState) != nullptr;
        }

    }
}
