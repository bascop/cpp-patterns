
// HEADER INCLUDE
#include "TestLink.hpp"

TestLink::TestLink(
    const SuccessorPtr& successorPtr,
    const OnOperateFn& onOperateFn)
    : Link(successorPtr),
      onOperateFn(onOperateFn)
{
}


cpp_patterns::Request TestLink::handle(const cpp_patterns::Request& /*request*/)
{
    if (onOperateFn != nullptr)
    {
        onOperateFn();
    }
    
    return {};
}
