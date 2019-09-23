
namespace cpp_patterns {

    template<typename KeyType, typename FlyweightType>
    FlyweightFactory<KeyType, FlyweightType>::FlyweightFactory()
        : initializeFlyweightFn([]() { return std::make_shared<FlyweightType>(); })
    {
    }


    template<typename Key, typename Flyweight>
    FlyweightFactory<Key, Flyweight>::FlyweightFactory(
        const InitializeFlyweightFn &initializeFlyweightFn)
        : initializeFlyweightFn(initializeFlyweightFn)
    {
    }


    template<typename KeyType, typename FlyweightType>
    bool FlyweightFactory<KeyType, FlyweightType>::has(const KeyType &key) const
    {
        return (pool.count(key) > 0);
    }


    template<typename KeyType, typename FlyweightType>
    FlyweightType &FlyweightFactory<KeyType, FlyweightType>::get(const KeyType &key)
    {
        if (!has(key))
        {
            create(key);
        }

        return pool[key];
    }


    template<typename KeyType, typename FlyweightType>
    void FlyweightFactory<KeyType, FlyweightType>::set(const KeyType &key, const FlyweightType &flyweight)
    {
        pool[key] = flyweight;
    }


    template<typename KeyType, typename FlyweightType>
    void FlyweightFactory<KeyType, FlyweightType>::create(const KeyType &key)
    {
        if (has(key))
        {
            return; // TODO : throw warning
        }

        pool[key] = *initializeFlyweightFn();
    }

}
