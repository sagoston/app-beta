cmake_minimum_required(VERSION 3.20)
project(app_beta LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/mathlib)

add_executable(app_beta src/main.cpp)
target_link_libraries(app_beta PRIVATE mathlib::mathlib)
