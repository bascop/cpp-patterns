
#include "Context.hpp"

namespace cpp_patterns {

    template<typename StateType>
    bool Context::currentStateIs() const
    {
        return std::dynamic_pointer_cast<StateType>(currentStatePtr) != nullptr;
    }

}
