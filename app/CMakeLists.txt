add_executable(my_app main.cpp)
target_include_directories(my_app INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(my_app my_library)
