
// HEADER INCLUDE
#include "TestLink.hpp"

TestLink::TestLink(
    const SuccessorPtr& successorPtr,
    const OnOperateFn& onOperateFn)
    : Link(successorPtr),
      onOperateFn(onOperateFn)
{
}


cpp_patterns::RequestPtr TestLink::handle(cpp_patterns::RequestPtr /*requestPtr*/)
{
    if (onOperateFn != nullptr)
    {
        onOperateFn();
    }
    
    return {};
}
