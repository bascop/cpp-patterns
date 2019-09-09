
#ifndef CPP_PATTERNS_SINGLETON_HPP
#define CPP_PATTERNS_SINGLETON_HPP

#include <memory>

namespace cpp_patterns {

    template<typename TypeName>
    class Singleton
    {
    public:
        virtual ~Singleton() = default;

        Singleton(const Singleton &other) = delete;

        virtual Singleton &operator=(const Singleton &other) = delete;

        static std::shared_ptr<TypeName> getInstance();

    protected:
        Singleton() = default;

    private:
        static std::shared_ptr<TypeName> instancePtr;
    };

}

#include "Singleton.tpp"

#endif
