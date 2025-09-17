cmake_minimum_required(VERSION 3.31)
project(cplusplus)

set(CMAKE_CXX_STANDARD 20)

add_executable(cplusplus
        src/week1/pointer.cpp
        src/week2/classes/time.h
        src/week2/classes/time.cpp
        src/week2/classes/time_main.cpp
        src/week2/pilha/stack.h
        src/week2/pilha/item_type.h
        src/week2/pilha/stack_vector.cpp
        src/week2/pilha/stack_main.cpp
        src/week2/fila/queue.cpp
        src/week2/fila/item_type.h
        src/week2/fila/queue_main.cpp
        src/week2/fila/queue.h
        src/week3/queueLinkedList.h
        src/week3/node_type.h
        src/week3/stackLinkedList.h
        src/week3/queueLinkedList.cpp
        src/week3/stackLinkedList.cpp
        src/week3/mainLinkedList.cpp
        src/week4/hash_application.cpp
        src/week4/aluno.cpp
        src/week4/aluno.h
        src/week4/hash.h
        src/week4/basic.cpp
        src/week5/aluno_tree.cpp
        src/week5/aluno_tree.h
        src/week5/search_tree.cpp
        src/week5/search_tree.h
        src/week5/search_tree_aplicacao.cpp
        src/week6/Aluno6.cpp
        src/week6/Aluno6.h
        src/week6/avl_search_tree.cpp
        src/week6/avl_search_tree.h
        src/week6/avl_search_tree_aplicacao.cpp
        src/week7/graph.cpp
        src/week7/graph.h
        src/week7/graph_pagerank.cpp
        src/week7/node_type.cpp
        src/week7/node_type.h
        src/week7/Queue7.h
        src/week7/queue_encadeado.cpp
        src/week7/vertex.h
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
