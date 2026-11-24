if (BUILD_SOLUTIONS)
    SET(TASK_SOURCES task_08_solution.cpp task_08_test.cpp)
else()
    SET(TASK_SOURCES task_08.cpp task_08_test.cpp)
endif()

add_executable(task_08_stl_containers_test ${TASK_SOURCES})

target_include_directories(task_08_stl_containers_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_SOLUTIONS)
    target_compile_definitions(task_08_stl_containers_test PRIVATE USE_SOLUTION)
endif()

target_link_libraries(task_08_stl_containers_test PRIVATE GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(task_08_stl_containers_test)
