
#include <cpp-patterns/observer/Notifier.hpp>

namespace patterns {
    namespace observer {

        Notifier::Notifier()
        {
        }


        void Notifier::addObserverPtr(const ObserverPtr &observerPtr)
        {
            if (observerPtr == nullptr)
                return;

            observerPtrs.push_back(observerPtr);
        }


        void Notifier::removeObserverPtr(const ObserverPtr &observerPtr)
        {
            if (observerPtr == nullptr)
                return;

            // TODO : implement remove method
        }


        void Notifier::notifyObservers(const patterns::messages::EventPtr &eventPtr)
        {
            for (const ObserverPtr &observerPtr : observerPtrs)
            {
                observerPtr->notify(eventPtr);
            }
        }


        void Notifier::notifyObservers()
        {
            notifyObservers(nullptr);
        }


        size_t Notifier::getNumberOfObservers() const
        {
            return observerPtrs.size();
        }

    }
}