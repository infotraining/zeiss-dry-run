if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_02_solution.cpp task_02_solution_test.cpp)
else()
    SET(TASK_SOURCES task_02.cpp task_02_test.cpp)
endif()

add_executable(task_02_smart_pointers_test ${TASK_SOURCES})

target_include_directories(task_02_smart_pointers_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_02_smart_pointers_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_02_smart_pointers_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_02_smart_pointers_test)
