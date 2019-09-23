
namespace cpp_patterns {

        template<typename TypeName>
        /*static*/ std::shared_ptr<TypeName> Singleton<TypeName>::instancePtr = nullptr;


        template<typename TypeName>
        /*static*/ std::shared_ptr<TypeName> Singleton<TypeName>::getInstance()
        {
            if (instancePtr == nullptr)
            {
                instancePtr = std::make_shared<TypeName>();
            }

            return instancePtr;
        }

}
