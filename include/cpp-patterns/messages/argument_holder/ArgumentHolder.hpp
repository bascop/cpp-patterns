
#ifndef CPP_PATTERNS_ARGUMENT_HPP
#define CPP_PATTERNS_ARGUMENT_HPP

#include <vector>
#include <cstdint>
#include <memory>

#include <boost/any.hpp>

namespace patterns {
    namespace messages {

        class ArgumentHolder
        {
        public:
            virtual ~ArgumentHolder() = default;

            template<typename T>
            void addArgument(const T &argument);

            template<typename T>
            std::shared_ptr<T> getArgument(uint32_t index) const;

            unsigned long getNumberOfArguments() const;

        protected:
            ArgumentHolder();

        private:
            std::vector<boost::any> arguments;
        };

    }
}

#include "ArgumentHolder.tpp"

#endif
