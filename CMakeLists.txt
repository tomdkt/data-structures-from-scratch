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
        src/semana2/fila/queue.cpp
        src/semana2/fila/item_type.h
        src/semana2/fila/queue_main.cpp
        src/semana2/fila/queue.h
        src/semana3/queueLinkedList.h
        src/semana3/node_type.h
        src/semana3/stackLinkedList.h
        src/semana3/queueLinkedList.cpp
        src/semana3/stackLinkedList.cpp
        src/semana3/mainLinkedList.cpp
        src/semana4/hash_application.cpp
        src/semana4/aluno.cpp
        src/semana4/aluno.h
        src/semana4/hash.h
        src/semana4/basic.cpp
        src/semana5/aluno_tree.cpp
        src/semana5/aluno_tree.h
        src/semana5/search_tree.cpp
        src/semana5/search_tree.h
        src/semana5/search_tree_aplicacao.cpp
        src/semana6/aluno_tree_avl.cpp
        src/semana6/aluno_tree_avl.h
        src/semana6/search_tree_avl.cpp
        src/semana6/search_tree_avl.h
        src/semana6/search_tree_aplicacao_avl.cpp
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
