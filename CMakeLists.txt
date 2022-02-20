cmake_minimum_required(VERSION 3.0)

project(hello)

set(SOURCE hello.c helper.c)

add_executable(${PROJECT_NAME} ${SOURCE})


