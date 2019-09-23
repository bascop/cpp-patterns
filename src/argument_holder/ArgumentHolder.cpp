
#include <cpp_patterns/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns {
    
    ArgumentHolder::ArgumentHolder()
        : ArgumentHolder(DEFAULT_STAMP, ArgumentMap({}))
    {
    }
    
    
    ArgumentHolder::ArgumentHolder(const Stamp& stamp)
        : ArgumentHolder(stamp, ArgumentMap({}))
    {
    }
    
    
    ArgumentHolder::ArgumentHolder(const ArgumentMap& map)
        : ArgumentHolder(DEFAULT_STAMP, map)
    {
    }
    
    
    ArgumentHolder::ArgumentHolder(const ArgumentMapPair& pair)
        : ArgumentHolder(DEFAULT_STAMP, {pair})
    {
    }
    
    
    ArgumentHolder::ArgumentHolder(const Stamp& stamp, const ArgumentMapPair& pair)
        : ArgumentHolder(stamp, ArgumentMap({pair}))
    {
    }
    
    
    ArgumentHolder::ArgumentHolder(const Stamp& stamp, const ArgumentMap& map)
        : stamp(stamp),
          argumentMap(map)
    {
    }
    
    
    size_t ArgumentHolder::count() const
    {
        return argumentMap.size();
    }
    
    
    Stamp ArgumentHolder::getStamp() const
    {
        return stamp;
    }

}