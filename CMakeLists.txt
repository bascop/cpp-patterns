CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT(cpp-patterns
        VERSION 0.0.1 LANGUAGES CXX)

ADD_COMPILE_OPTIONS(
        -std=c++14 -Wall -Wconversion -Wextra) # TODO : this is dirty

FIND_PACKAGE(Boost REQUIRED COMPONENTS
        unit_test_framework)

INCLUDE_DIRECTORIES( # TODO : is this needed ???
        include
        SYSTEM) # TODO : include boost directories

FILE(GLOB_RECURSE ${PROJECT_NAME}_HDRS
        include/${PROJECT_NAME}/*.hpp)

FILE(GLOB_RECURSE ${PROJECT_NAME}_TPPS
        include/${PROJECT_NAME}/*.tpp)

FILE(GLOB_RECURSE ${PROJECT_NAME}_SRCS
        src/*.cpp)

ADD_LIBRARY(${PROJECT_NAME} SHARED
        ${${PROJECT_NAME}_HDRS}
        ${${PROJECT_NAME}_TPPS}
        ${${PROJECT_NAME}_SRCS})

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
        ${Boost_LIBRARIES})

INCLUDE(GNUInstallDirs)

TARGET_INCLUDE_DIRECTORIES(
        ${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

TARGET_COMPILE_DEFINITIONS(
        ${PROJECT_NAME} PRIVATE -D_EXPORT)

INSTALL(
        TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_NAME}-config
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

INSTALL(
        EXPORT ${PROJECT_NAME}-config
        NAMESPACE ${PROJECT_NAME}::
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME})

INSTALL(
        DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME})

file(GLOB_RECURSE ${PROJECT_NAME}_test_SRCS
        test/*.cpp
        test/*.hpp)

add_executable(${PROJECT_NAME}_test
        ${${PROJECT_NAME}_test_SRCS})

target_link_libraries(${PROJECT_NAME}_test
        ${Boost_LIBRARIES}
        ${PROJECT_NAME}_lib)
