cmake_minimum_required(VERSION 3.16)
PROJECT(Test)

#生成debug版本以支持gdb调试
set(CMAKE_BUILD_TYPE "Debug")

add_subdirectory(Reflection)