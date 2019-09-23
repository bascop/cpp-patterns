
#define BOOST_TEST_DYN_LINK

// SYSTEM INCLUDES
#include <map> // TODO : remove
#include <string> // TODO : remove

// 3TH PARTY INCLUDES
#include <boost/test/unit_test.hpp>
#include <boost/any.hpp> // TODO : remove

// PROJECT INCLUDES
#include <cpp_patterns/argument_holder/ArgumentHolder.hpp>


BOOST_AUTO_TEST_SUITE(ArgumentHolder)

    
    BOOST_AUTO_TEST_CASE(DEFAULT_CONSTRUCTOR)
    {
        cpp_patterns::ArgumentHolder argumentHolder;

        BOOST_CHECK_EQUAL(argumentHolder.count(), 0);
    }
    
    
    BOOST_AUTO_TEST_CASE(MAP_CONSTRUCTOR_STRING)
    {
        typedef std::string ArgumentValue;

        cpp_patterns::ArgumentMap argumentMap {
            {"test1", ArgumentValue("test2")},
            {"test3", ArgumentValue("test4")},
        };
        
        cpp_patterns::ArgumentHolder argumentHolder(argumentMap);
    
        BOOST_ASSERT(argumentHolder.count() == 2);
        BOOST_CHECK_EQUAL(argumentHolder.getArgument<ArgumentValue>("test1"), "test2");
        BOOST_CHECK_EQUAL(argumentHolder.getArgument<ArgumentValue>("test3"), "test4");
    }
    
    
    BOOST_AUTO_TEST_CASE(MAP_CONSTRUCTOR_DOUBLE)
    {
        typedef double ArgumentValue;
        
        cpp_patterns::ArgumentMap argumentMap {
            {"test1", ArgumentValue(1.23)},
            {"test3", ArgumentValue(2.34)},
        };
        
        cpp_patterns::ArgumentHolder argumentHolder(argumentMap);
    
        BOOST_ASSERT(argumentHolder.count() == 2);
        BOOST_CHECK_EQUAL(argumentHolder.getArgument<ArgumentValue>("test1"), 1.23);
        BOOST_CHECK_EQUAL(argumentHolder.getArgument<ArgumentValue>("test3"), 2.34);
    }
    
    
    BOOST_AUTO_TEST_CASE(STAMP)
    {
        cpp_patterns::ArgumentHolder argumentHolder1(1);
        BOOST_CHECK_EQUAL(argumentHolder1.getStamp(), 1);
    
        cpp_patterns::ArgumentHolder argumentHolder2(2);
        BOOST_CHECK_EQUAL(argumentHolder2.getStamp(), 2);
    }


BOOST_AUTO_TEST_SUITE_END()
