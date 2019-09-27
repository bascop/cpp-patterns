
#ifndef CPP_PATTERNS_ARGUMENT_HPP
#define CPP_PATTERNS_ARGUMENT_HPP

// SYSTEM INCLUDES
#include <cstdint>
#include <memory>
#include <map>
#include <string>

// 3TH PARTY INCLUDES
#include <boost/any.hpp>

#define DEFAULT_STAMP 255

namespace cpp_patterns {
    
    typedef uint8_t Stamp;
    typedef std::string ArgumentKey;
    typedef boost::any UniversalArgument; // TODO : make boost::variant ???
    typedef std::map<ArgumentKey, UniversalArgument> ArgumentMap;
    typedef std::pair<ArgumentKey, UniversalArgument> ArgumentMapPair;
    
    class ArgumentHolder
    {
    public:
        ArgumentHolder();
        
        explicit ArgumentHolder(const ArgumentMap& map);
        
        explicit ArgumentHolder(const ArgumentMapPair& pair);
    
        explicit ArgumentHolder(const Stamp& stamp);
        
        ArgumentHolder(const Stamp& stamp, const ArgumentMap& map);
        
        ArgumentHolder(const Stamp& stamp, const ArgumentMapPair& pair);
        
        virtual ~ArgumentHolder() = default;
    
        template<typename ArgumentValue>
        ArgumentValue getArgument(const ArgumentKey& key) const;
    
        bool hasArgument(const ArgumentKey& key) const;
    
        Stamp getStamp() const;

        size_t count() const;
    
    private:
        const Stamp stamp;
        const ArgumentMap argumentMap;
    };
    
    typedef std::shared_ptr<ArgumentHolder> ArgumentHolderPtr;

}

#include "ArgumentHolder.tpp"

#endif
