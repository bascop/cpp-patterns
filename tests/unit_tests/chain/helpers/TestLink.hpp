
#ifndef CPP_PATTERNS_TESTLINK_HPP
#define CPP_PATTERNS_TESTLINK_HPP

// SYSTEM INCLUDES
#include <functional>

// PROJECT INCLUDES
#include <cpp_patterns/chain/Link.hpp>

class TestLink : public cpp_patterns::Link
{
public:
    using OnOperateFn = std::function<void()>;

    TestLink(
        const SuccessorPtr& successorPtr,
        const OnOperateFn& onOperateFn);

    virtual ~TestLink() = default;

    cpp_patterns::RequestPtr handle(cpp_patterns::RequestPtr requestPtr) final;

private:
    OnOperateFn onOperateFn;
};

#endif // CPP_PATTERNS_TESTLINK_HPP
