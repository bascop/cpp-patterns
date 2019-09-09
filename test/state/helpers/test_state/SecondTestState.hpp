

#ifndef CPP_PATTERNS_SECONDSTATE_HPP
#define CPP_PATTERNS_SECONDSTATE_HPP

#include "TestState.hpp"


class SecondTestState : public TestState
{
public:
    explicit SecondTestState(const std::shared_ptr<TestContext> &contextPtr);

    virtual ~SecondTestState() = default;

    bool handleEvent(const patterns::messages::EventPtr &eventPtr) override;

private:
    bool onGoToFirstTestState() const;
};

typedef std::shared_ptr<SecondTestState> SecondTestStatePtr;


#endif //CPP_PATTERNS_SECONDSTATE_HPP
