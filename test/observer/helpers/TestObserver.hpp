

#ifndef CPP_PATTERNS_TESTOBSERVER_HPP
#define CPP_PATTERNS_TESTOBSERVER_HPP

#include <cpp-patterns/observer/Observer.hpp>


class TestObserver : public patterns::observer::Observer
{
public:
    TestObserver();

    virtual ~TestObserver() = default;

    void notify(const patterns::messages::EventPtr &eventPtr) override;

    bool gotNotified() const;

    const patterns::messages::EventPtr &getLastEventPtr() const;

private:
    bool notified;
    patterns::messages::EventPtr lastEventPtr;
};


typedef std::shared_ptr<TestObserver> TestObserverPtr;
typedef std::vector<TestObserverPtr> TestObserverPtrs;

#endif //CPP_PATTERNS_TESTOBSERVER_HPP
