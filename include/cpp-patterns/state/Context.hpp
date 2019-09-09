
#ifndef CPP_PATTERNS_CONTEXT_HPP
#define CPP_PATTERNS_CONTEXT_HPP

#include <memory>
#include <queue>
#include <algorithm>

#include <cpp-patterns/state/State.hpp>

namespace cpp_patterns {

    template<typename T>
    class Context
        : public std::enable_shared_from_this<T>
    {
    public:
        virtual ~Context() = default;

        void run();

        virtual void setStartState() = 0;

        void setNewCurrentState(const StatePtr &newCurrentStatePtr);

        void scheduleEvent(const EventPtr &eventPtr);

        void scheduleEvent(uint8_t eventId);

        void preemptEvents();

        template<typename S>
        bool currentStateIs() const;

    protected:
        Context();

        StatePtr currentStatePtr;

    private:
        std::queue<EventPtr> eventPtrs;
    };

}

#include "Context.tpp"

#endif
