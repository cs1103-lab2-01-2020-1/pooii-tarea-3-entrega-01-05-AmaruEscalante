cmake_minimum_required(VERSION 3.9)
project(tarea3)

file(GLOB SOURCES "src/*", "src/clases/*")

add_executable(tarea3 ${SOURCES})