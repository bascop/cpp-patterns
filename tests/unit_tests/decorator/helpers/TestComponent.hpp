//
//#ifndef CPP_PATTERNS_TESTCOMPONENT_HPP
//#define CPP_PATTERNS_TESTCOMPONENT_HPP
//
//// SYSTEM INCLUDES
//#include <functional>
//
//// PROJECT INCLUDES
//#include <cpp_patterns/decorator/Component.hpp>
//
//class TestComponent : public cpp_patterns::Component<void(const std::string&)>
//{
//public:
//    using OnCallFn = std::function<void()>;
//
//    TestComponent();
//
//    explicit TestComponent(
//        const OnCallFn& OnOperateFn);
//
//    virtual ~TestComponent() = default;
//
//    virtual ReturnType operator(ArgumentTypes)() override;
//
//private:
//    OnCallFn OnOperateFn;
//};
//
//#endif //CPP_PATTERNS_TESTCOMPONENT_HPP
