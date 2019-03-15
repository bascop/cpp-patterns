
#include <cpp-patterns/state/State.hpp>

namespace patterns {
    namespace state {

        State::State()
        {
        }


        void State::entryAction()
        {
        }


        void State::doActivity()
        {
        }


        void State::exitAction()
        {
        }


        bool State::handleEvent(const patterns::messages::EventPtr &eventPtr)
        {
            switch (eventPtr->getId())
            {
                default:
                    return false;
            }
        }

    }
}
