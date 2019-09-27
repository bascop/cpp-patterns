
#ifndef CPP_PATTERNS_SUBJECTINTERFACE_HPP
#define CPP_PATTERNS_SUBJECTINTERFACE_HPP

// SYSTEM INCLUDES
#include <memory>

// PROJECT INCLUDES
#include <cpp_patterns/observer/Observer.hpp>

namespace cpp_patterns {
    
    class Notifier // TODO : the goal is to use templates for NotificationPtr if possible
    {
    public:
        Notifier();
        
        virtual ~Notifier() = default;

        void addObserverPtr(const ObserverPtr &observerPtr);

        void notifyObservers(const Notification &notification) const;
        
        // TODO : remove notifier

        size_t getNumberOfObservers() const;

    private:
        void validateObserverPtr(const ObserverPtr& observerPtr) const;
        
        void validateObserverPtrArray(const ObserverPtrArray& observerPtrArray) const;
        
        ObserverPtrArray observerPtrArray;
    };


    typedef std::shared_ptr<Notifier> NotifierPtr;

}

#endif
