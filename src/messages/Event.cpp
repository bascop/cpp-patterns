
#include <cpp-patterns/messages/Event.hpp>

namespace cpp_patterns {

    Event::Event(uint8_t id)
        : ArgumentHolder(),
          id(id)
    {
    }


    uint8_t Event::getId() const
    {
        return id;
    }

}
