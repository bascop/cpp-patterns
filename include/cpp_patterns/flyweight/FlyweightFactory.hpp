
#ifndef CPP_PATTERNS_FLYWEIGHTFACTORY_HPP
#define CPP_PATTERNS_FLYWEIGHTFACTORY_HPP

// SYSTEM INCLUDES
#include <memory>
#include <map>

namespace cpp_patterns {

    template<typename Key, typename Flyweight>
    class FlyweightFactory
    {
    public:
        using FlyweightPtr = std::shared_ptr<Flyweight>;
        using InitializeFlyweightFn = std::function<FlyweightPtr()>;

        FlyweightFactory();

        explicit FlyweightFactory(const InitializeFlyweightFn& initializeFlyweightFn);

        virtual ~FlyweightFactory() = default;

        bool has(const Key& key) const;

        Flyweight& get(const Key& key);

        void set(const Key& key, const Flyweight& flyweight);

    protected:
        virtual void create(const Key& key);

        std::map<Key, Flyweight> pool;

        InitializeFlyweightFn initializeFlyweightFn;
    };

}

#include "FlyweightFactory.tpp"

#endif //CPP_PATTERNS_FLYWEIGHTFACTORY_HPP
