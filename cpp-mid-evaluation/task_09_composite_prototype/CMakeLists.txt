if(BUILD_SOLUTIONS)
    set(TASK_SOURCES task_09_solution.cpp task_09_solution_test.cpp)
else()
    set(TASK_SOURCES task_09.cpp task_09_test.cpp)
endif()

add_executable(task_09_composite_prototype_test ${TASK_SOURCES})
target_include_directories(task_09_composite_prototype_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_09_composite_prototype_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_09_composite_prototype_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_09_composite_prototype_test)
