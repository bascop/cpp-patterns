
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

// PROJECT INCLUDES
#include <cpp-patterns/observer/Notifier.hpp>
#include "helpers/TestObserver.hpp"

BOOST_AUTO_TEST_SUITE(OBSERVER_NOTIFIER)

    // TODO : test throw warning if addObserverPtr(nullptr)

    BOOST_AUTO_TEST_CASE(ADD_OBSERVER_PTR)
    {
        cpp_patterns::Notifier notifier;

        notifier.addObserverPtr(std::make_shared<TestObserver>());
        notifier.addObserverPtr(std::make_shared<TestObserver>());

        BOOST_CHECK_EQUAL(notifier.getNumberOfObservers(), 2);
    }


    BOOST_AUTO_TEST_CASE(NOTIFY_OBSERVERS)
    {
        bool observer1GotNotified = false;
        bool observer2GotNotified = false;

        auto observer1OnNotificationFn = [&observer1GotNotified](){ observer1GotNotified = true;};
        auto observer2OnNotificationFn = [&observer2GotNotified](){ observer2GotNotified = true;};

        cpp_patterns::Notifier notifier;
        notifier.addObserverPtr(std::make_shared<TestObserver>(observer1OnNotificationFn));
        notifier.addObserverPtr(std::make_shared<TestObserver>(observer2OnNotificationFn));

        BOOST_ASSERT(notifier.getNumberOfObservers() == 2);

        notifier.notifyObservers();

        BOOST_CHECK(observer1GotNotified);
        BOOST_CHECK(observer2GotNotified);
    }


BOOST_AUTO_TEST_SUITE_END()
