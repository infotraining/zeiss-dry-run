if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_11_solution.cpp task_11_test.cpp)
else()
    SET(TASK_SOURCES task_11.cpp task_11_test.cpp)
endif()

add_executable(task_11_raii_test ${TASK_SOURCES})

target_include_directories(task_11_raii_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_11_raii_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_11_raii_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_11_raii_test)
