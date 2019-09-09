

#ifndef CPP_PATTERNS_FIRSTSTATE_HPP
#define CPP_PATTERNS_FIRSTSTATE_HPP

#include "TestState.hpp"


class FirstTestState : public TestState
{
public:
    explicit FirstTestState(const std::shared_ptr<TestContext> &contextPtr);

    virtual ~FirstTestState() = default;

    bool handleEvent(const patterns::messages::EventPtr &eventPtr) override;

private:
    bool onGoToSecondTestState() const;
};

typedef std::shared_ptr<FirstTestState> FirstTestStatePtr;


#endif //CPP_PATTERNS_FIRSTSTATE_HPP
