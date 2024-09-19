cmake_minimum_required(VERSION 3.22)

project(OpenCV)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(opencv_explorer src/main.cpp)

target_include_directories(opencv_explorer PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(opencv_explorer PRIVATE ${OpenCV_LIBS})
target_compile_features(opencv_explorer PRIVATE cxx_std_11)