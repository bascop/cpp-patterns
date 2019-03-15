
namespace patterns {
    namespace messages {

        template<typename T>
        std::shared_ptr<T> ArgumentHolder::getArgument(uint32_t index) const
        {
            if (index >= arguments.size())
                return nullptr;

            const auto argumentValue = boost::any_cast<T>(arguments[index]);

            return std::make_shared<T>(argumentValue);
        }


        template<typename T>
        void ArgumentHolder::addArgument(const T &argument)
        {
            arguments.push_back(argument);
        }

    }
}
