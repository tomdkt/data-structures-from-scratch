#include "queueLinkedList.h"

#include <cstddef>         // Para NULL.
#include <new>             // Para bad_alloc.
#include <iostream>
using namespace std;


QueueLinkedList::QueueLinkedList() {
  front = NULL;
  rear = NULL;
}

QueueLinkedList::~QueueLinkedList() {
  while (front != NULL) {
    const NodeType *tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = NULL;
}


bool QueueLinkedList::isFull() const {
  NodeType *location;
  try {
    location = new NodeType;
    delete location;
    return false;
  } catch (std::bad_alloc exception) {
    return true;
  }
}

bool QueueLinkedList::isEmpty() const {
  return (front == NULL);
}

void QueueLinkedList::enqueue(ItemType newItem) {
  if (!isFull()) {
    NodeType *newNode;
    newNode = new NodeType;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  } else {
    throw "QueueLinkedList is already full!";
  }
}

ItemType QueueLinkedList::dequeue() {
  if (!isEmpty()) {
    NodeType *tempPtr;
    tempPtr = front;
    ItemType item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;
    return item;
  } else {
    throw "QueueLinkedList is empty!";
  }
}

void QueueLinkedList::print() const {
  NodeType *tempPtr = front;
  while (tempPtr != NULL) {
    cout << tempPtr->info;
    tempPtr = tempPtr->next;
  }
  cout << endl;
}
