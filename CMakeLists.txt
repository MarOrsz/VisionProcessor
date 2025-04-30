cmake_minimum_required(VERSION 3.10)

project(VisionProcessor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message("CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")

# set(CMAKE_TOOLCHAIN_FILE "E:\\Training\\vcpkg\\vcpkg\scripts\\buildsystems\\vcpkg.cmake")
find_package(opencv CONFIG REQUIRED)

add_executable(vision src/main.cpp)
target_link_libraries(vision PRIVATE ${OpenCV_LIBS})