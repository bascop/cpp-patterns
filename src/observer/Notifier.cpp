
#include <cpp_patterns/observer/Notifier.hpp>

namespace cpp_patterns {
    
    Notifier::Notifier()
        : observerPtrArray()
    {
    }
    
    
    Notifier::Notifier(const ObserverPtr &observerPtr)
        : observerPtrArray({observerPtr})
    {
    }
    
    
    Notifier::Notifier(const ObserverPtrArray &observerPtrArray)
        : observerPtrArray(observerPtrArray)
    {
    }

    
    void Notifier::addObserverPtr(const ObserverPtr &observerPtr)
    {
        if (observerPtr == nullptr)
        {
            throw std::invalid_argument("Observer can not be nullptr");
        }

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
    
}