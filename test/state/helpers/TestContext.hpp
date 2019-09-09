

#ifndef CPP_PATTERNS_TESTCONTEXT_HPP
#define CPP_PATTERNS_TESTCONTEXT_HPP

#include <cpp-patterns/state/Context.hpp>


class TestContext
    : public cpp_patterns::Context<TestContext>
{
public:
    TestContext();

    virtual ~TestContext() = default;

    void setStartState() final;

protected:
};


typedef std::shared_ptr<TestContext> TestContextPtr;

#endif //CPP_PATTERNS_TESTCONTEXT_HPP
