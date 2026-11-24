if(BUILD_SOLUTIONS)
    set(TASK_SOURCES task_04_solution.cpp task_04_solution_test.cpp)
else()
    set(TASK_SOURCES task_04.cpp task_04_test.cpp)
endif()

add_executable(task_04_adl_customization_test ${TASK_SOURCES})
target_include_directories(task_04_adl_customization_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_04_adl_customization_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_04_adl_customization_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_04_adl_customization_test)
