cmake_minimum_required(VERSION 3.0.0)
project(Opencv_Starter_Project.1 VERSION 0.1.0 LANGUAGES C CXX)

find_package(OpenCV REQUIRED)

add_executable(Opencv_Starter_Project.1 main.cpp)

target_link_libraries(
    ${PROJECT_NAME}
    ${OpenCV_LIBS}
)