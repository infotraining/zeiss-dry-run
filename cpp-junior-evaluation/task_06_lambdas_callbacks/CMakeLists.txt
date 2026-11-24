if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_06_solution.cpp task_06_test.cpp)
else()
    SET(TASK_SOURCES task_06.cpp task_06_test.cpp)
endif()

add_executable(task_06_lambdas_callbacks_test ${TASK_SOURCES})

target_include_directories(task_06_lambdas_callbacks_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_06_lambdas_callbacks_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_06_lambdas_callbacks_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_06_lambdas_callbacks_test)
