cmake_minimum_required(VERSION 3.18)

project(wellhead LANGUAGES CXX)

include(cmake/init.cmake)
include(cmake/clang-format.cmake)

add_subdirectory(event_store)
add_subdirectory(support)
add_subdirectory(third_party)
