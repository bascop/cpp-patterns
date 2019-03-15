
#ifndef CPP_PATTERNS_SUBJECTINTERFACE_HPP
#define CPP_PATTERNS_SUBJECTINTERFACE_HPP

#include <memory>

#include <cpp-patterns/observer/Observer.hpp>

namespace patterns {
    namespace observer {

        class Notifier
        {
        public:
            virtual ~Notifier() = default;

            void addObserverPtr(const ObserverPtr &observerPtr);

            void removeObserverPtr(const ObserverPtr &observerPtr);

            void notifyObservers(const patterns::messages::EventPtr &eventPtr);

            void notifyObservers();

            size_t getNumberOfObservers() const;

        protected:
            Notifier();

            ObserverPtrs observerPtrs;
        };


        typedef std::shared_ptr<Notifier> SubjectPtr;

    }
}

#endif
