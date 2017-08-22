cmake_minimum_required (VERSION 2.6)
project(boost_tests)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

message(unit_test_framework)

add_executable(dupa dupa.cpp)

target_link_libraries(dupa "-lboost_unit_test_framework")
