//
//#define BOOST_TEST_DYN_LINK
//
//// SYSTEM INCLUDES
//#include <string>
//
//// 3TH PARTY INCLUDES
//#include <boost/test/unit_test.hpp>
//
//BOOST_AUTO_TEST_SUITE(DECORATOR)
//
//
//    BOOST_AUTO_TEST_CASE(FUNCTION_OPERATOR)
//    {
//        bool componentGotCalled = false;
//        auto OnOperateFn = [&componentGotCalled]() { componentGotCalled = true; };
//
//        TestComponent component(OnOperateFn);
//        cpp_patterns::decorator decoratedComponent(component);
//
//        decoratedComponent();
//
//        BOOST_CHECK(component.gotCalled());
//    }
//
//
//BOOST_AUTO_TEST_SUITE_END()
