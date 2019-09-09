
#ifndef PROJECT_TESTSINGLETON_HPP
#define PROJECT_TESTSINGLETON_HPP

#include <cpp-patterns/singleton/Singleton.hpp>


class TestSingleton : public cpp_patterns::Singleton<TestSingleton>
{
public:
    TestSingleton();

    virtual ~TestSingleton() = default;

    void setNumber(uint32_t number);

    uint32_t getNumber() const;

private:
    uint32_t number;
};


#endif
