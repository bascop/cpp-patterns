
#include <cpp-patterns/messages/argument_holder/ArgumentHolder.hpp>

namespace patterns {
    namespace messages {

        ArgumentHolder::ArgumentHolder()
            : arguments()
        {
        }


        unsigned long ArgumentHolder::getNumberOfArguments() const
        {
            return arguments.size();
        }

    }
}