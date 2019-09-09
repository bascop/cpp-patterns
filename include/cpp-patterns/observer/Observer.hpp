
#ifndef CPP_PATTERNS_OBSERVER_HPP
#define CPP_PATTERNS_OBSERVER_HPP

// SYSTEM INCLUDES
#include <memory>
#include <vector>

// PROJECT INCLUDES
#include <cpp-patterns/messages/Event.hpp>

namespace cpp_patterns {

    class Observer
    {
    public:
        virtual ~Observer() = default;

        virtual void onNotification(const EventPtr &eventPtr) = 0;

    protected:
        Observer() = default;
    };


    typedef std::shared_ptr<Observer> ObserverPtr;
    typedef std::vector<ObserverPtr> ObserverPtrArray;

}

#endif
