# 🚀 Data Structures from Scratch (C++20)

Welcome! This repository is a meticulously organized, "from the ground up" exploration of classic data structures, implemented in modern **C++20**. Whether you are preparing for technical interviews or deepening your understanding of computer science fundamentals, this project provides clean, educational implementations across a 7-week curriculum.

---

## 🌟 High-Level Overview

Explore everything from memory basics to advanced graph algorithms. Each module includes the data structure implementation and a demo application.

### 📚 Curriculum at a Glance

| Week | Topic | Key Concepts |
| :--- | :--- | :--- |
| **Week 1** | [Pointer Basics](./src/week1/pointer.cpp) | Memory handling, pointer arithmetic, addresses. |
| **Week 2** | [Array Stacks & Queues](./src/week2) | Contiguous memory, circular buffers, LIFO/FIFO. |
| **Week 3** | [Linked Lists](./src/week3) | Dynamic allocation, node-based stacks and queues. |
| **Week 4** | [Hash Tables](./src/week4) | Open addressing, hash functions, record management. |
| **Week 5** | [Binary Search Trees](./src/week5) | Recursion, tree traversals (In-order, Pre-order, Post-order). |
| **Week 6** | [AVL Trees (Balanced)](./src/week6) | **Advanced:** Self-balancing via rotations (LL, RR, LR, RL). |
| **Week 7** | [Graphs & PageRank](./src/week7) | **Advanced:** Adjacency matrices, Graph traversals, PageRank algorithm. |

---

## 🔥 Featured Advanced Content

If you're looking for the most complex implementations in this project, check these out:

*   **[AVL Tree Implementation](./src/week6/avl_search_tree.h):** A self-balancing binary search tree that maintains $O(\log n)$ performance for all major operations. See it in action: [AVL Demo](./src/week6/avl_search_tree_aplicacao.cpp).
*   **[PageRank Algorithm](./src/week7/graph_pagerank.cpp):** An implementation of the iterative algorithm used by search engines to rank pages, applied to a directed graph represented by an [Adjacency Matrix](./src/week7/graph.h).
*   **[Dynamic Linked Structures](./src/week3):** Implementation of stacks and queues using manual node allocation, demonstrating fine-grained memory management in C++.

---

## 🛠️ Build and Run

This project uses **CMake** for easy building across different environments.

### Prerequisites
*   **CMake** (3.x or newer)
*   **C++20-compatible compiler** (GCC 10+, Clang 10+, or MSVC 2019+)

### Quick Start
1.  **Clone and Enter:**
    ```bash
    git clone https://github.com/yourusername/data-structures-from-scratch.git
    cd data-structures-from-scratch
    ```
2.  **Generate Build Files:**
    ```bash
    cmake -B build -DCMAKE_BUILD_TYPE=Release
    ```
3.  **Build All Targets:**
    ```bash
    cmake --build build
    ```

### Running Demos

This project generates individual executables for each week/topic. After building, all binaries are located in the `build/output` directory.

To build all demos at once:
```bash
cmake --build build
```

To build a specific demo (e.g., `week1_pointer`):
```bash
cmake --build build --target week1_pointer
```

To run a specific demo:
```bash
./build/output/week1_pointer
```

#### Available Targets:

| Target | Description | Source |
| :--- | :--- | :--- |
| `week1_pointer` | Pointer Basics & Recursion | `src/week1/pointer.cpp` |
| `week2_time` | C++ Classes & Time Management | `src/week2/classes/` |
| `week2_stack` | Vector-based Stack Implementation | `src/week2/pilha/` |
| `week2_queue` | Array-based Circular Queue | `src/week2/fila/` |
| `week3_linkedlist` | Stack & Queue via Linked Lists | `src/week3/` |
| `week4_hash` | Basic Hash Table Implementation | `src/week4/` |
| `week5_tree` | Binary Search Tree (BST) | `src/week5/` |
| `week6_avl` | Self-balancing AVL Tree | `src/week6/` |
| `week7_graph` | Graph with PageRank Algorithm | `src/week7/` |

---

## 📝 Project Philosophy

*   **Educational First:** Code is written for readability and learning, not production optimization.
*   **Modern C++:** Leveraging C++20 features where applicable.
*   **Self-Contained:** Each week is a modular step forward in complexity.

---
*Happy coding! Feel free to explore the source and experiment with the implementations.*