if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_12_solution.cpp task_12_solution_test.cpp)
else()
    SET(TASK_SOURCES task_12.cpp task_12_test.cpp)
endif()

add_executable(task_12_oop_design_test ${TASK_SOURCES})

target_include_directories(task_12_oop_design_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_12_oop_design_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_12_oop_design_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_12_oop_design_test)
