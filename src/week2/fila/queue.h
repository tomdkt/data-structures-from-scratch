//
// Created by thomas on 7/30/25.
//

#ifndef QUEUE_H
#define QUEUE_H
#include "item_type.h"

constexpr int MAX_ITEM = 10;

class Queue {
public:
    Queue();

    ~Queue();

    bool isEmpty() const;

    bool isFull() const;

    void print() const;

    void enqueue(ItemType);

    ItemType dequeue();

private:
    int front;
    int back;
    ItemType *structure;
};


#endif //QUEUE_H
