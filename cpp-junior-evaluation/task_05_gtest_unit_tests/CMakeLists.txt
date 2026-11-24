if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_05_solution.cpp task_05_solution_test.cpp)
else()
    SET(TASK_SOURCES task_05.cpp task_05_test.cpp)
endif()

add_executable(task_05_gtest_unit_tests_test ${TASK_SOURCES})

target_include_directories(task_05_gtest_unit_tests_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_05_gtest_unit_tests_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_05_gtest_unit_tests_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_05_gtest_unit_tests_test)
