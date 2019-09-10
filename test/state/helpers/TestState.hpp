
#ifndef CPP_PATTERNS_TESTSTATE_HPP
#define CPP_PATTERNS_TESTSTATE_HPP

// SYSTEM INCLUDES
#include <functional>
#include <memory>

// PROJECT INCLUDES
#include <cpp-patterns/state/ContextState.hpp>

class TestState : public cpp_patterns::State
{
public:
    using EntryFn = std::function<void()>;
    using DoFn = std::function<void()>;
    using ExitFn = std::function<void()>;
    using HandleEventFn = std::function<void()>;

    TestState();
    virtual ~TestState() = default;

    void entryAction() final;
    void doActivity() final;
    void exitAction() final;
    bool handleEvent(const cpp_patterns::EventPtr &eventPtr) final;

    void setEntryActionFn(const EntryFn &entryFn);
    void setDoActivityFn(const DoFn &doFn);
    void setExitActionFn(const ExitFn &exitFn);
    void setHandleEventFn(const HandleEventFn &handleEventFn);

private:
    EntryFn entryActionFn;
    DoFn doActivityFn;
    ExitFn exitActionFn;
    HandleEventFn handleEventFn;
};

typedef std::shared_ptr<TestState> TestStatePtr;


#endif //CPP_PATTERNS_TESTSTATE_HPP
