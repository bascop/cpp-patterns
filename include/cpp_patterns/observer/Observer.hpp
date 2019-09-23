
#ifndef CPP_PATTERNS_OBSERVER_HPP
#define CPP_PATTERNS_OBSERVER_HPP

// SYSTEM INCLUDES
#include <memory>
#include <vector>

// PROJECT INCLUDES
#include <cpp_patterns/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns {
    
    typedef ArgumentHolder Notification;

    class Observer
    {
    public:
        virtual ~Observer() = default;

        virtual void onNotification(const Notification& notification) = 0;

    protected:
        Observer() = default;
    };


    typedef std::shared_ptr<Observer> ObserverPtr;
    typedef std::vector<ObserverPtr> ObserverPtrArray;

}

#endif
