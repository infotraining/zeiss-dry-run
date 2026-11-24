cmake_minimum_required(VERSION 3.14)
project(CppMidEvaluation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4)
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

option(BUILD_SOLUTIONS "Build reference solutions instead of starter code" OFF)
add_subdirectory(task_01_generic_algorithms)
add_subdirectory(task_02_type_traits_ctad)
add_subdirectory(task_03_container_selection)
add_subdirectory(task_04_adl_customization)
add_subdirectory(task_05_algorithm_pipeline)
add_subdirectory(task_06_bounded_queue)
add_subdirectory(task_07_thread_pool)
add_subdirectory(task_08_decorator)
add_subdirectory(task_09_composite_prototype)
add_subdirectory(task_10_factory_proxy)
add_subdirectory(task_11_refactoring_gmock)
add_subdirectory(task_12_uml_doxygen)
