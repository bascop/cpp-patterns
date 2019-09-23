
#define BOOST_TEST_DYN_LINK

// SYSTEM INCLUDES
#include <string>

// 3TH PARTY INCLUDES
#include <boost/test/unit_test.hpp>

// PROJECT INCLUDES
#include <cpp_patterns/flyweight/FlyweightFactory.hpp>

typedef std::string KeyType;
typedef int FlyWeightType;

BOOST_AUTO_TEST_SUITE(FLYWEIGHT)

    // TODO : test delete element
    // TODO : test warning if key in method get(key) does not exist

    BOOST_AUTO_TEST_CASE(GET)
    {
        cpp_patterns::FlyweightFactory<KeyType, FlyWeightType> factory;

        KeyType key1 = "test1";
        FlyWeightType value1 = 1;

        BOOST_CHECK_EQUAL(factory.has(key1), false);

        factory.set(key1, value1);

        BOOST_CHECK_EQUAL(factory.get(key1), true);
    }


    BOOST_AUTO_TEST_CASE(CONSTRUCTOR)
    {
        auto initializeFlyweightFn = []() { return std::make_shared<int>(3); };
        cpp_patterns::FlyweightFactory<KeyType, FlyWeightType> factory(initializeFlyweightFn);

        BOOST_CHECK_EQUAL(factory.get("test"), 3);
    }


BOOST_AUTO_TEST_SUITE_END()
