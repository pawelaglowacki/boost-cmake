cmake_minimum_required (VERSION 2.6)
project(niechtokurwazadziala)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

message(unit_test_framework)

add_executable(dupa dupa.cpp)
#set (CMAKE_CXX_FLAGS "-lboost_unit_test_framework")

#target_link_libraries(dupa "/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so")

target_link_libraries(dupa "-lboost_unit_test_framework")
