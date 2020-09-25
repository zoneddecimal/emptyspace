cmake_minimum_required(VERSION 3.10)

project(Emptyspace VERSION 0.1)


set(GCC_LINK_FLAGS "-lsfml-graphics -lsfml-window -lsfml-system")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_LINK_FLAGS}")

add_executable(Emptyspace main.cxx)

