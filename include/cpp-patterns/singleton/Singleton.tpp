
namespace patterns {
    namespace singleton {

        template<typename T>
        /* static */ std::shared_ptr<T> Singleton<T>::instancePtr = nullptr;


        template<typename T>
        Singleton<T>::Singleton()
        {
        }


        template<typename T>
        /* static */ std::shared_ptr<T> Singleton<T>::getInstance()
        {
            if (instancePtr == nullptr)
            {
                instancePtr = std::make_shared<T>();
            }

            return instancePtr;
        }


        template<typename T>
        /* static */ std::shared_ptr<T> Singleton<T>::i()
        {
            return getInstance();
        }

    }
}
