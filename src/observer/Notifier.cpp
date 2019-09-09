
#include <cpp-patterns/observer/Notifier.hpp>

namespace cpp_patterns {

    void Notifier::addObserverPtr(const ObserverPtr &observerPtr)
    {
        if (observerPtr == nullptr)
        {
            return; // TODO : throw warning
        }

        observerPtrArray.push_back(observerPtr);
    }


    void Notifier::notifyObservers(const EventPtr &eventPtr)
    {
        for (const ObserverPtr &observerPtr : observerPtrArray)
        {
            notifyObserver(observerPtr, eventPtr);
        }
    }


    void Notifier::notifyObservers()
    {
        notifyObservers(nullptr);
    }


    void Notifier::notifyObserver(const ObserverPtr &observerPtr, const EventPtr &eventPtr)
    {
        if (observerPtr == nullptr)
        {
            return; // TODO : throw warning
        }

        observerPtr->onNotification(eventPtr);
    }


    size_t Notifier::getNumberOfObservers() const
    {
        return observerPtrArray.size();
    }

}