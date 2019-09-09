

#ifndef CPP_PATTERNS_TESTARGUMENT_HPP
#define CPP_PATTERNS_TESTARGUMENT_HPP

#include <cpp-patterns/messages/argument_holder/ArgumentHolder.hpp>

class TestArgumentHolder : public cpp_patterns::ArgumentHolder
{
public:
    TestArgumentHolder();

    virtual ~TestArgumentHolder() = default;
};


#endif //CPP_PATTERNS_TESTARGUMENT_HPP
