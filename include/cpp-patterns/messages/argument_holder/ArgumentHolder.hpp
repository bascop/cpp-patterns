
#ifndef CPP_PATTERNS_ARGUMENT_HPP
#define CPP_PATTERNS_ARGUMENT_HPP

#include <vector>
#include <cstdint>
#include <memory>

#include <boost/any.hpp>

namespace cpp_patterns {

    class ArgumentHolder
    {
    public:
        virtual ~ArgumentHolder() = default;

        template<typename Type>
        void addArgument(const Type &argument);

        template<typename Type>
        Type getArgumentByIndex(uint32_t index) const;

        unsigned long getNumberOfArguments() const;

    protected:
        ArgumentHolder();

    private:
        std::vector<boost::any> arguments; // TODO : make std::any
    };

}

#include "ArgumentHolder.tpp"

#endif
