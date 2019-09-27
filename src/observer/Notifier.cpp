
#include <cpp_patterns/observer/Notifier.hpp>

namespace cpp_patterns {
    
    Notifier::Notifier()
        : observerPtrArray()
    {
    }

    
    void Notifier::addObserverPtr(const ObserverPtr &observerPtr)
    {
        validateObserverPtr(observerPtr);

        observerPtrArray.push_back(observerPtr);
    }


    void Notifier::notifyObservers(const Notification &notification) const
    {
        for (const ObserverPtr &observerPtr : observerPtrArray)
        {
            observerPtr->onNotification(notification);
        }
    }


    size_t Notifier::getNumberOfObservers() const
    {
        return observerPtrArray.size();
    }
    
    
    void Notifier::validateObserverPtr(const ObserverPtr& observerPtr) const
    {
        if (observerPtr == nullptr) // TODO : implement as warning so that program can continue
        {
            throw std::invalid_argument("Can not add nullptr as ObserverPtr to Notifier");
        }
    }
    
    
    void Notifier::validateObserverPtrArray(const ObserverPtrArray& observerPtrArray) const
    {
        for (const ObserverPtr& observerPtr : observerPtrArray)
        {
            validateObserverPtr(observerPtr);
        }
    }

}