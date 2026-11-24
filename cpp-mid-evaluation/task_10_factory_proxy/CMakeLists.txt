if(BUILD_SOLUTIONS)
    set(TASK_SOURCES task_10_solution.cpp task_10_solution_test.cpp)
else()
    set(TASK_SOURCES task_10.cpp task_10_test.cpp)
endif()

add_executable(task_10_factory_proxy_test ${TASK_SOURCES})
target_include_directories(task_10_factory_proxy_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_10_factory_proxy_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_10_factory_proxy_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(task_10_factory_proxy_test)
