
// HEADER INCLUDE
#include <cpp_patterns/chain/Link.hpp>

namespace cpp_patterns
{
    Link::Link(const Link::SuccessorPtr& successorPtr)
        : successorPtr(successorPtr)
    {
    }
    
    
    void Link::call(RequestPtr requestPtr)
    {
        validate(requestPtr);
        
        RequestPtr nextRequestPtr = handle(requestPtr);
        
        callSuccessor(nextRequestPtr);
    }
    
    
    void Link::callSuccessor(RequestPtr requestPtr)
    {
        if (successorPtr == nullptr) return;

        successorPtr->call(requestPtr);
    }
    
    
    void Link::validate(RequestPtr /*requestPtr*/) const
    {
        // by default a request is valid, so no throws here
    }

}
