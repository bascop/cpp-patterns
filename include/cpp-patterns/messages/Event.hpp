#ifndef CPP_PATTERNS_EVENT_HPP
#define CPP_PATTERNS_EVENT_HPP

#include <memory>

#include <cpp-patterns/messages/argument_holder/ArgumentHolder.hpp>

namespace cpp_patterns {

    class Event : public ArgumentHolder
    {
    public:
        explicit Event(uint8_t id);

        virtual ~Event() = default;

        uint8_t getId() const;

    private:
        uint8_t id;
    };


    typedef std::shared_ptr<Event> EventPtr;

}

#endif