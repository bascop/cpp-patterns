
#ifndef CPP_PATTERNS_OBSERVER_HPP
#define CPP_PATTERNS_OBSERVER_HPP

#include <memory>
#include <vector>

#include <cpp-patterns/messages/Event.hpp>

namespace patterns {
    namespace observer {

        class Observer
        {
        public:
            virtual ~Observer() = default;

            virtual void notify(const patterns::messages::EventPtr &eventPtr) = 0;

        protected:
            Observer();
        };


        typedef std::shared_ptr<Observer> ObserverPtr;
        typedef std::vector<ObserverPtr> ObserverPtrs;

    }
}

#endif
