
#ifndef CPP_PATTERNS_SUBJECTINTERFACE_HPP
#define CPP_PATTERNS_SUBJECTINTERFACE_HPP

// SYSTEM INCLUDES
#include <memory>

// PROJECT INCLUDES
#include <cpp_patterns/observer/Observer.hpp>

namespace cpp_patterns {
    
    class Notifier
    {
    public:
        Notifier();
        
        explicit Notifier(const ObserverPtr& observerPtr);
        
        explicit Notifier(const ObserverPtrArray& observerPtrArray);

        virtual ~Notifier() = default;

        void addObserverPtr(const ObserverPtr &observerPtr);

        void notifyObservers(const Notification &notification) const;

        size_t getNumberOfObservers() const;

    private:
        ObserverPtrArray observerPtrArray;
    };


    typedef std::shared_ptr<Notifier> NotifierPtr;

}

#endif
