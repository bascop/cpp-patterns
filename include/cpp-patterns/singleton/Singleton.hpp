
#ifndef CPP_PATTERNS_SINGLETON_HPP
#define CPP_PATTERNS_SINGLETON_HPP

#include <memory>

namespace patterns {
    namespace singleton {

        template<typename T> class Singleton
        {
        public:
            virtual ~Singleton() = default;

            Singleton(const Singleton &other) = delete;

            virtual Singleton &operator=(const Singleton &other) = delete;

            static std::shared_ptr<T> getInstance();

            static std::shared_ptr<T> i();

        protected:
            Singleton();

        private:
            static std::shared_ptr<T> instancePtr;
        };

    }
}

#include "Singleton.tpp"

#endif
