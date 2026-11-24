if(BUILD_SOLUTIONS)
    set(TASK_SOURCES task_01_solution.cpp task_01_solution_test.cpp)
else()
    set(TASK_SOURCES task_01.cpp task_01_test.cpp)
endif()

add_executable(task_01_polymorphism_test ${TASK_SOURCES})

target_include_directories(task_01_polymorphism_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_01_polymorphism_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_01_polymorphism_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_01_polymorphism_test)
