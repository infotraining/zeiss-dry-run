cmake_minimum_required(VERSION 3.14)
project(CppJuniorEvaluation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    # add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Przełącznik: OFF = buduje kod startowy kandydata, ON = buduje rozwiązania wzorcowe
option(BUILD_SOLUTIONS "Build reference solutions instead of starter code" OFF)

add_subdirectory(task_01_polymorphism)
add_subdirectory(task_02_smart_pointers)
add_subdirectory(task_03_operators_rule_of_five)
add_subdirectory(task_04_value_move_semantics)
add_subdirectory(task_05_gtest_unit_tests)
add_subdirectory(task_06_lambdas_callbacks)
add_subdirectory(task_07_cpp_casts)
add_subdirectory(task_08_stl_containers)
add_subdirectory(task_09_stl_algorithms)
add_subdirectory(task_10_data_structures)
add_subdirectory(task_11_raii)
add_subdirectory(task_12_oop_design)
