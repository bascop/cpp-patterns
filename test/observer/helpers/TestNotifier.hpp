

#ifndef CPP_PATTERNS_TESTNOTIFIER_HPP
#define CPP_PATTERNS_TESTNOTIFIER_HPP

#include <cpp-patterns/observer/Notifier.hpp>


class TestNotifier : public patterns::observer::Notifier
{
public:
    TestNotifier();

    virtual ~TestNotifier() = default;
};


#endif //CPP_PATTERNS_TESTNOTIFIER_HPP
