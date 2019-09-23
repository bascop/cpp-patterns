
#ifndef CPP_PATTERNS_CONTEXTSTATE_H
#define CPP_PATTERNS_CONTEXTSTATE_H

#include <cpp_patterns/state/State.hpp>

namespace cpp_patterns {

    template<typename T>
    class ContextState : public State
    {
    public:
        virtual ~ContextState() = default;

    protected:
        explicit ContextState(const std::shared_ptr<T> &contextPtr);

        std::shared_ptr<T> contextPtr;
    };

}

#include "ContextState.tpp"

#endif