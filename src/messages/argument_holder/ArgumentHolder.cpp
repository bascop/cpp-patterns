
#include <cpp-patterns/messages/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns {

    ArgumentHolder::ArgumentHolder()
        : arguments()
    {
    }


    unsigned long ArgumentHolder::getNumberOfArguments() const
    {
        return arguments.size();
    }

}