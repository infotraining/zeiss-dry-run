if(BUILD_SOLUTIONS)
    set(TASK_SOURCES task_03_solution.cpp task_03_test.cpp)
else()
    set(TASK_SOURCES task_03.cpp task_03_test.cpp)
endif()

add_executable(task_03_container_selection_test ${TASK_SOURCES})
target_include_directories(task_03_container_selection_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_03_container_selection_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_03_container_selection_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_03_container_selection_test)
