
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "test_utils/TestNotifier.hpp"
#include "test_utils/TestObserver.hpp"

BOOST_AUTO_TEST_SUITE(observer_Notifier_tests)


    BOOST_AUTO_TEST_CASE(observer_Notifier_test_addObserver)
    {
        TestNotifier notifier;

        BOOST_ASSERT(notifier.getNumberOfObservers() == 0);

        uint8_t numberOfObservers = 4;

        for (uint8_t i = 0; i < numberOfObservers; ++i)
        {
            notifier.addObserverPtr(std::make_shared<TestObserver>());
        }

        BOOST_CHECK_EQUAL(notifier.getNumberOfObservers(), numberOfObservers);
    }


    BOOST_AUTO_TEST_CASE(observer_Notifier_test_addObserver_nullptr)
    {
        TestNotifier notifier;

        BOOST_ASSERT(notifier.getNumberOfObservers() == 0);

        uint8_t numberOfObservers = 4;

        for (uint8_t i = 0; i < numberOfObservers; ++i)
        {
            notifier.addObserverPtr(nullptr);
        }

        BOOST_CHECK_EQUAL(notifier.getNumberOfObservers(), 0);
    }


    BOOST_AUTO_TEST_CASE(observer_Notifier_test_notifyObservers)
    {
        TestNotifier notifier;

        uint8_t numberOfObservers = 4;
        TestObserverPtrs testObserverPtrs;

        for (uint8_t i = 0; i < numberOfObservers; ++i)
        {
            const auto testObserverPtr = std::make_shared<TestObserver>();
            testObserverPtrs.push_back(testObserverPtr);
            notifier.addObserverPtr(testObserverPtr);
        }

        notifier.notifyObservers();

        for (uint8_t i = 0; i < numberOfObservers; ++i)
        {
            BOOST_CHECK(testObserverPtrs[i]->gotNotified());
        }
    }


    BOOST_AUTO_TEST_CASE(observer_Notifier_test_removeObserver)
    {
        // TODO : write unittest
    }


    BOOST_AUTO_TEST_CASE(observer_Notifier_test_removeObserver_nullptr)
    {
        // TODO : write unittest
    }


BOOST_AUTO_TEST_SUITE_END()
