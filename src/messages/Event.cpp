
#include <cpp-patterns/messages/Event.hpp>

namespace patterns {
    namespace messages {

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
}
