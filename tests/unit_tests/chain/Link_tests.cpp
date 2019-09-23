
#define BOOST_TEST_DYN_LINK

// SYSTEM INCLUDES
#include <string>

// 3TH PARTY INCLUDES
#include <boost/test/unit_test.hpp>

// PROJECT INCLUDES
#include <cpp_patterns/chain/Link.hpp>

// PROJECT TEST INCLUDES
#include "helpers/TestLink.hpp"

BOOST_AUTO_TEST_SUITE(Link)

    
    BOOST_AUTO_TEST_CASE(PARAMETER_CALL)
    {
        using namespace cpp_patterns;

        bool chainLink1GotCalled = false;
        bool chainLink2GotCalled = false;

        auto onRequestFn1 = [&chainLink1GotCalled](){ chainLink1GotCalled = true;};
        auto onRequestFn2 = [&chainLink2GotCalled](){ chainLink2GotCalled = true;};

        LinkPtr chainLink2Ptr = std::make_shared<TestLink>(nullptr, onRequestFn2);
        LinkPtr chainLink1Ptr = std::make_shared<TestLink>(chainLink2Ptr, onRequestFn1);

        chainLink1Ptr->call(std::make_shared<Request>());

        BOOST_CHECK(chainLink1GotCalled);
        BOOST_CHECK(chainLink2GotCalled);
    }


BOOST_AUTO_TEST_SUITE_END()
