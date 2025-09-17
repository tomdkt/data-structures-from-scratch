# Data Structures Study (C++20)

This repository is a collection of small, didactic implementations of classic data structures in C++20, organized by
“weeks” (semana1…semana7). Each folder typically contains the data structure implementation and a simple example
program.

## What’s Included

- Pointer basics (intro)
    - A short warm-up with pointers and memory handling concepts.

- Stack (array-based)
    - Fixed-capacity stack implemented with a contiguous array.
    - Operations: push, pop, isEmpty, isFull, print.

- Queue (array-based)
    - Fixed-capacity circular queue implemented with a contiguous array.
    - Operations: enqueue, dequeue, isEmpty, isFull, print.

- Stack (linked list)
    - Unbounded stack implemented using singly linked nodes.
    - Operations: push, pop, isEmpty, isFull (allocation check), print.

- Queue (linked list)
    - Unbounded queue implemented using singly linked nodes.
    - Operations: enqueue, dequeue, isEmpty, isFull (allocation check), print.

- Hash Table (array-backed, open addressing)
    - Simple hash table storing records (e.g., “Aluno”/student).
    - Operations: insert, retrieve/search, delete, print.

- Binary Search Tree (BST)
    - Standard BST for inserting, searching, deleting, and traversing elements.
    - Traversals: pre-order, in-order, post-order.

- AVL Tree (self-balancing BST)
    - BST with automatic rotations to keep height balanced.
    - Operations: insert (with balancing), search, delete (if provided), traversals.

- Graph (adjacency matrix)
    - Directed graph representation using an adjacency matrix.
    - Supports adding vertices/edges, querying adjacencies, marking/clearing visits, and printing the matrix.
    - Includes a simple PageRank-style iterative computation example.

## Project Structure

- src/semana1: Intro/pointer basics
- src/semana2: Array-based Stack and Queue (+ small class example)
- src/semana3: Linked-list-based Stack and Queue
- src/semana4: Hash Table
- src/semana5: Binary Search Tree (BST)
- src/semana6: AVL Tree
- src/semana7: Graph (adjacency matrix), auxiliary queue, and demo

## Build and Run

Prerequisites:

- CMake (3.x or newer)
- A C++20-compatible compiler (e.g., GCC, Clang, or MSVC)

Generic steps:

1. Create a build directory:
    - `mkdir build && cd build`
2. Configure with CMake:
    - `cmake .. -DCMAKE_BUILD_TYPE=Release`
3. Build:
    - `cmake --build .`

Depending on how targets are defined, you can:

- Run the generated executables from the build output.
- Or open the project in an IDE like CLion and run the example configurations.

Tip:

- Each “semana” directory generally contains one or more small example mains you can enable or run to see the data
  structure in action.

## Notes

- The code aims to be educational and straightforward rather than production-optimized.
- Some example programs may be minimal or commented—uncomment or adjust them as needed to run demonstrations.

Enjoy studying!