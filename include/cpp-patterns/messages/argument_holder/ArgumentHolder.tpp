
namespace cpp_patterns {

    template<typename Type>
    Type ArgumentHolder::getArgumentByIndex(uint32_t index) const
    {
        // TODO : throw warning (index < 0 || index >= arguments.size())
        return boost::any_cast<Type>(arguments[index]);
    }


    template<typename Type>
    void ArgumentHolder::addArgument(const Type &argument)
    {
        arguments.push_back(argument);
    }

}
