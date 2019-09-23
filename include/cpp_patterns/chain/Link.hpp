
#ifndef CPP_PATTERNS_LINK_HPP
#define CPP_PATTERNS_LINK_HPP

// SYSTEM INCLUDES
#include <memory>

// 3TH PARTY INCLUDES
#include <boost/any.hpp>

// PROJECT INCLUDES
#include <cpp_patterns/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns {

    typedef ArgumentHolder Request;
    typedef ArgumentHolderPtr RequestPtr;
    
    class Link
    {
    public:
        using SuccessorPtr = std::shared_ptr<Link>;
        
        virtual ~Link() = default;

        void call(RequestPtr requestPtr);
        
    protected:
        explicit Link(const SuccessorPtr& successorPtr);
    
        virtual void validate(RequestPtr requestPtr) const;
    
        virtual RequestPtr handle(RequestPtr requestPtr) = 0;

    private:
        void callSuccessor(RequestPtr requestPtr);
    
        SuccessorPtr successorPtr;
    };
    
    typedef std::shared_ptr<Link> LinkPtr;

}

#endif
