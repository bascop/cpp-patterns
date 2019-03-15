
#include "TestSingleton.hpp"


TestSingleton::TestSingleton()
    : Singleton()
{
}


void TestSingleton::setNumber(uint32_t number)
{
    TestSingleton::number = number;
}


uint32_t TestSingleton::getNumber() const
{
    return number;
}
