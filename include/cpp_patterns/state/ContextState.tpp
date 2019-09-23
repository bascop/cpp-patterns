
namespace cpp_patterns {

    template<typename T>
    ContextState<T>::ContextState(const std::shared_ptr<T> &contextPtr)
        : State(),
          contextPtr(contextPtr)
    {
    }

}
