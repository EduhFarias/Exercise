cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Stack.c Stack.h main.c)
set(SOURCE_2 main2.c  Stack.c Stack.h)

add_executable(untitled ${SOURCE_FILES})
add_executable(qqlcoisa ${SOURCE_2})