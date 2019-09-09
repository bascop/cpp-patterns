
#ifndef CPP_PATTERNS_SUBJECTINTERFACE_HPP
#define CPP_PATTERNS_SUBJECTINTERFACE_HPP

// SYSTEM INCLUDES
#include <memory>

// PROJECT INCLUDES
#include <cpp-patterns/observer/Observer.hpp>

namespace cpp_patterns {

    class Notifier
    {
    public:
        Notifier() = default;

        virtual ~Notifier() = default;

        void addObserverPtr(const ObserverPtr &observerPtr);

        void notifyObservers(const EventPtr &eventPtr);

        void notifyObservers();

        size_t getNumberOfObservers() const;

    private:
        void notifyObserver(const ObserverPtr &observerPtr, const EventPtr &eventPtr);

        ObserverPtrArray observerPtrArray;
    };


    typedef std::shared_ptr<Notifier> NotifierPtr;

}

#endif
