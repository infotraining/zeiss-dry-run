if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_07_solution.cpp task_07_test.cpp)
else()
    SET(TASK_SOURCES task_07.cpp task_07_test.cpp)
endif()

add_executable(task_07_cpp_casts_test ${TASK_SOURCES})

target_include_directories(task_07_cpp_casts_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_07_cpp_casts_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_07_cpp_casts_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_07_cpp_casts_test)
