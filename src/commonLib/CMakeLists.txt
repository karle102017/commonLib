cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
project(commonLib)
#add_compile_options(-Wall -Wextra -Wpedantic)

include_directories(${CMAKE_CURRENT_LIST_DIR}/src)

add_executable(test_time_counter src/test_time_counter.cpp)
target_link_libraries(test_time_counter pthread)