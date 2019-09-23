
#ifndef CPP_PATTERNS_TESTOBSERVER_HPP
#define CPP_PATTERNS_TESTOBSERVER_HPP

// SYSTEM INCLUDES
#include <functional>

// PROJECT INCLUDES
#include <cpp_patterns/observer/Observer.hpp>

class TestObserver : public cpp_patterns::Observer
{
public:
    using OnNotificationFn = std::function<void()>;
    using OnNotificationWithEventFn = std::function<void(const cpp_patterns::Notification& notification)>;

    TestObserver();

    explicit TestObserver(
        const OnNotificationFn& onNotificationFn);
    
    explicit TestObserver(
        const OnNotificationWithEventFn& onNotificationWithEventFn);
    
    TestObserver(
        const OnNotificationFn& onNotificationFn,
        const OnNotificationWithEventFn& onNotificationWithEventFn);

    virtual ~TestObserver() = default;

    void onNotification(const cpp_patterns::Notification &notification) final;

private:
    OnNotificationFn onNotificationFn;
    OnNotificationWithEventFn onNotificationWithEventFn;
};

#endif //CPP_PATTERNS_TESTOBSERVER_HPP
