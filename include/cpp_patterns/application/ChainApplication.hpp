
#ifndef CPP_PATTERNS_CHAINAPPLICATION_HPP
#define CPP_PATTERNS_CHAINAPPLICATION_HPP

// 3TH PARTY INCLUDES
#include <cpp_patterns/chain/Link.hpp>

namespace cpp_patterns
{
    class ChainApplication
    {
    public:
        ChainApplication(int argc, char** argv, const LinkPtr& chainPtr);
        
        virtual ~ChainApplication() = default;
        
        int run();
    
    private:
        void spin();
    
        void checkIfOk();
        
        virtual bool shouldStop() const = 0;
        
        int argc;
        char **argv;
        bool ok;
    
        LinkPtr chainPtr;
    };
    
    typedef std::shared_ptr<ChainApplication> ApplicationPtr;
}

#endif // CPP_PATTERNS_CHAINAPPLICATION_HPP
