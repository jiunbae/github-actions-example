cmake_minimum_required(VERSION 3.5)
project(github-actions-example)

set(CMAKE_CXX_STANDARD 11)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR})

add_executable(test_add test_add.cc)
target_link_libraries(test_add ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
add_test(NAME test_add COMMAND test_add)

add_executable(test_sub test_sub.cc)
target_link_libraries(test_sub ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
add_test(NAME test_sub COMMAND test_sub)