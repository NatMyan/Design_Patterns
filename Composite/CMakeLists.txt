cmake_minimum_required(VERSION 3.16)

project(ShapesQtApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(ShapesQtApp
    Shapes.cpp
)

target_link_libraries(ShapesQtApp PRIVATE Qt6::Widgets) 
