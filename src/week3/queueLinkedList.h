#ifndef QUEUE_LINKED_LIST_H
#define QUEUE_LINKED_LIST_H
#include "node_type.h"


class QueueLinkedList {
public:
 QueueLinkedList(); // Constructor
 ~QueueLinkedList(); // Destrutor
 bool isEmpty() const;

 bool isFull() const;

 void print() const;

 void enqueue(ItemType);

 ItemType dequeue();

private:
 NodeType *front;
 NodeType *rear;
};


#endif
