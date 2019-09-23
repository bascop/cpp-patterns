
#ifndef CPP_PATTERNS_CONTEXT_HPP
#define CPP_PATTERNS_CONTEXT_HPP

#include <memory>
#include <queue>
#include <algorithm>

#include <cpp_patterns/state/State.hpp>

namespace cpp_patterns {

    // TODO : implement loop frequency
    // TODO : set start state with template method

    class Context // : public std::enable_shared_from_this<Type>
    {
    public:
        Context() = default;

        virtual ~Context() = default;

        void run();

        virtual void setStartState(const StatePtr& statePtr);

        void changeState(const StatePtr &newCurrentStatePtr);

        void scheduleEvent(const EventPtr &eventPtr);

        void scheduleEvent(uint8_t eventId);

        void preemptEvents();

        template<typename StateType>
        bool currentStateIs() const;

    private:
        StatePtr currentStatePtr;
        std::queue<EventPtr> eventPtrs;
    };

}

#include "Context.tpp"

#endif
