
// HEADER INCLUDE
#include <cpp_patterns/chain/Link.hpp>

namespace cpp_patterns
{
    Link::Link(const Link::SuccessorPtr& successorPtr)
        : successorPtr(successorPtr)
    {
    }
    
    
    void Link::call(const Request &request)
    {
        Request nextRequest = handle(request);
        
        callSuccessor(nextRequest);
    }
    
    
    void Link::call()
    {
        call(Request());
    }
    
    
    void Link::callSuccessor(const Request &request)
    {
        if (successorPtr == nullptr) return;

        successorPtr->call(request);
    }

}
