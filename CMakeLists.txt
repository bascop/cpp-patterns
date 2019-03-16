cmake_minimum_required(VERSION 3.1)
project(cpp_patterns)

ADD_COMPILE_OPTIONS(-std=c++14 -Wall -Wconversion -Wextra) # TODO : this is dirty

FIND_PACKAGE(Boost REQUIRED COMPONENTS
        system
        unit_test_framework)

INCLUDE_DIRECTORIES(
        include
        SYSTEM) # TODO : include boost directories ?

file(GLOB_RECURSE
        ${PROJECT_NAME}_HDRS
        include/${PROJECT_NAME}/cpp-patterns/*.hpp
        include/${PROJECT_NAME}/cpp-patterns/*.tpp)

file(GLOB_RECURSE
        ${PROJECT_NAME}_SRCS
        src/*.cpp)

add_library(${PROJECT_NAME}_lib SHARED
        ${${PROJECT_NAME}_HDRS}
        ${${PROJECT_NAME}_SRCS})

target_link_libraries(${PROJECT_NAME}_lib
        ${Boost_LIBRARIES})


file(GLOB_RECURSE
        ${PROJECT_NAME}_test_SRCS
        test/*.cpp)

add_executable(${PROJECT_NAME}_test
        ${${PROJECT_NAME}_test_SRCS})

target_link_libraries(${PROJECT_NAME}_test
        ${Boost_LIBRARIES}
        ${PROJECT_NAME}_lib)

