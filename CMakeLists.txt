cmake_minimum_required(VERSION 3.10)

project(Maktaba)



file(GLOB MY_LIBRARY_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(my_library STATIC ${MY_LIBRARY_SOURCES})

add_subdirectory(app)



# Add the test target
enable_testing()
find_package(GTest REQUIRED)
# Create a variable to store the names of the test files
file(GLOB TEST_FILES "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp")
# Add the test files to an executable
add_executable(tests ${TEST_FILES})


target_link_libraries(tests my_library GTest::GTest GTest::Main)

# Register the test target
add_test(NAME my_project_tests COMMAND tests)