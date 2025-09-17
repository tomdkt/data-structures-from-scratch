//
// Created by thomas on 7/30/25.
//

#include "queue.h"

#include <iostream>
#include <ostream>
using namespace std;

Queue::Queue() {
    front = 0;
    back = 0;
    structure = new ItemType[MAX_ITEM];
}

Queue::~Queue() {
    delete[] structure;
}

bool Queue::isEmpty() const {
    return front == back;
}

bool Queue::isFull() const {
    return back - front == MAX_ITEM;
}

void Queue::enqueue(ItemType item) {
    if (isFull()) {
        throw "Queue is full";
    }

    structure[back % MAX_ITEM] = item;
    back++;
}

ItemType Queue::dequeue() {
    if (isEmpty()) {
        throw "Queue is empty";
    }
    front++;
    return structure[(front - 1) % MAX_ITEM];
}

void Queue::print() const {
    for (int i = front; i < back; i++) {
        cout << structure[i % MAX_ITEM] << " ";
    }
    cout << endl;
}
