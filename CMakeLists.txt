cmake_minimum_required(VERSION 3.31)
project(cplusplus)

set(CMAKE_CXX_STANDARD 20)

add_executable(cplusplus
        src/semana1/pointer.cpp
        src/semana2/classes/time.h
        src/semana2/classes/time.cpp
        src/semana2/classes/time_main.cpp
        src/semana2/pilha/stack.h
        src/semana2/pilha/item_type.h
        src/semana2/pilha/stack_vector.cpp
        src/semana2/pilha/stack_main.cpp
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
