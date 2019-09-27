
#ifndef CPP_PATTERNS_LINK_HPP
#define CPP_PATTERNS_LINK_HPP

// SYSTEM INCLUDES
#include <memory>

// 3TH PARTY INCLUDES
#include <boost/any.hpp>

// PROJECT INCLUDES
#include <cpp_patterns/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns
{
    typedef ArgumentHolder Request;

    
    class Link // TODO : the goal is to use templates for RequestPtr and successorPtr if possible
    {
    public:
        using SuccessorPtr = std::shared_ptr<Link>;

        virtual ~Link() = default;

        void call(const Request &request);
        
        void call();

    protected:
        explicit Link(const SuccessorPtr &successorPtr);

        virtual Request handle(const Request &request) = 0;

    private:
        void callSuccessor(const Request &request);

        SuccessorPtr successorPtr;
    };

    
    typedef std::shared_ptr<Link> LinkPtr;
}

#endif
