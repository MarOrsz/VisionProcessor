cmake_minimum_required(VERSION 3.10)

project(HelloWorld)



find_package(opencv CONFIG REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(HelloWorld main.cpp)

target_link_libraries(HelloWorld PRIVATE ${OpenCV_LIBS})