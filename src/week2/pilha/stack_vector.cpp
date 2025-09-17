#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    length = 0;
    structure = new ItemType[MAX_SIZE];
}

Stack::~Stack() {
    delete[] structure;
}

bool Stack::isEmpty() const {
    return length == 0;
}

bool Stack::isFull() const {
    return length == MAX_SIZE;
}

void Stack::push(const ItemType item) {
    if (isFull()) {
        throw "Stack is full";
    }
    structure[length] = item;
    length++;
}

ItemType Stack::pop() {
    if (isEmpty()) {
        throw "Stack is empty";
    }

    return structure[--length];
}

void Stack::print() const {
    for (int i = 0; i < length; i++) {
        cout << structure[i] << " ";
    }
    cout << endl;
}
