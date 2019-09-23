
namespace cpp_patterns {
    
    template <typename ArgumentValue>
    ArgumentValue ArgumentHolder::getArgument(const ArgumentKey& key) const
    {
        UniversalArgument universalArgument = argumentMap.at(key);

        return boost::any_cast<ArgumentValue>(universalArgument);
    }

}
