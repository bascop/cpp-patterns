

#ifndef CPP_PATTERNS_STATEINTERFACE_HPP
#define CPP_PATTERNS_STATEINTERFACE_HPP

#include <cpp_patterns/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns {

    typedef ArgumentHolder Event;
    typedef std::shared_ptr<Event> EventPtr;
    
    class State
    {
    public:
        virtual ~State() = default;

        virtual void entryAction();

        virtual void doActivity();

        virtual void exitAction();

        virtual bool handleEvent(const EventPtr &eventPtr);

    protected:
        State() = default;
    };


    typedef std::shared_ptr<State> StatePtr;

}

#endif //CPP_PATTERNS_STATEINTERFACE_HPP
