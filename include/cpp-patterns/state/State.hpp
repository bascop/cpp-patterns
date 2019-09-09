

#ifndef CPP_PATTERNS_STATEINTERFACE_HPP
#define CPP_PATTERNS_STATEINTERFACE_HPP

#include <cpp-patterns/messages/Event.hpp>

namespace cpp_patterns {

    class State
    {
    public:
        virtual ~State() = default;

        virtual void doActivity();

        virtual void entryAction();

        virtual void exitAction();

        virtual bool handleEvent(const EventPtr &eventPtr);

    protected:
        State();
    };


    typedef std::shared_ptr<State> StatePtr;

}

#endif //CPP_PATTERNS_STATEINTERFACE_HPP
