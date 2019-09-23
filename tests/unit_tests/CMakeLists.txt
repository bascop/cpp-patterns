
FILE(GLOB_RECURSE ${PROJECT_NAME}_unit_test_HDRS
        *.hpp)

FILE(GLOB_RECURSE ${PROJECT_NAME}_unit_test__TPPS
        *.tpp)

FILE(GLOB_RECURSE ${PROJECT_NAME}_unit_test_SRCS
        *.cpp)

SET(${PROJECT_NAME}_unit_test_files
        ${${PROJECT_NAME}_unit_test_HDRS}
        ${${PROJECT_NAME}_unit_test__TPPS}
        ${${PROJECT_NAME}_unit_test_SRCS})

file(GLOB_RECURSE ${PROJECT_NAME}_unit_test_SRCS
        ${${PROJECT_NAME}_files}
        ${${PROJECT_NAME}_unit_test_files})

ADD_EXECUTABLE(${PROJECT_NAME}_unit_test
        ${${PROJECT_NAME}_unit_test_SRCS})

TARGET_LINK_LIBRARIES(${PROJECT_NAME}_unit_test
        ${Boost_LIBRARIES})
