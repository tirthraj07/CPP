cmake_minimum_required(VERSION 3.10)

project(ExternProject VERSION 1.0
                      DESCRIPTION "A simple project that contains extern"
                      LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)


add_executable(${PROJECT_NAME} "src/main.cpp"
                               "src/header.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE lib)