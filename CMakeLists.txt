cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)
set(GCC_LINK_FLAGS "-lsfml-graphics -lsfml-window -lsfml-system ")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_LINK_FLAGS}")
link_libraries(stdc++fs)

project(Emptyspace VERSION 0.1)

file(COPY assets DESTINATION .)

add_executable(Emptyspace main.cxx)
#set_property(TARGET Emptyspace PROPERTY CXX_STANDARD 17)
#set_property(TARGET Emptyspace PROPERTY CXX_STANDARD_REQUIRED True)

