cmake_minimum_required(VERSION 2.8.0)
project( demo )

set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

set(OpenCV_LIBS /opt/opencv-4.1.0/lib)
set(OpenCV_INCLUDE_DIRS /opt/opencv-4.1.0/include)

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( demo demo.cpp )
target_link_libraries( demo ${OpenCV_LIBS} )

