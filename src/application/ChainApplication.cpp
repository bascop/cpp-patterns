
// HEADER INCLUDE
#include <cpp_patterns/application/ChainApplication.hpp>

// 3TH PARTY INCLUDES
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace cpp_patterns
{


    ChainApplication::ChainApplication(int argc, char **argv, const LinkPtr &chainPtr)
        : argc(argc)
        , argv(argv)
        , ok(true)
        , chainPtr(chainPtr)
    {
        if (chainPtr == nullptr)
        {
            throw std::invalid_argument("ChainApplication can not run without chain links");
        }
    }


    void ChainApplication::spin()
    {
        chainPtr->call();

        checkIfOk();
    }


    void ChainApplication::checkIfOk()
    {
        if (shouldStop())
        {
            ChainApplication::ok = false;
        }
    }
    
    
    int ChainApplication::run()
    {
        ChainApplication::ok = true;
        
        while (ChainApplication::ok)
        {
            ChainApplication::spin();
        }
        
        return 0;
    }
}