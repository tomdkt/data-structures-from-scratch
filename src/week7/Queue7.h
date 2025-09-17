#ifndef QUEUE_H
#define QUEUE_H 

#include "node_type.h"

class Queue7
{
public:
 Queue7(); // Constructor
 ~Queue7(); // Destrutor
 bool isEmpty() const;
 bool isFull() const;
 void print() const;

 void enqueue(ItemType);
 ItemType dequeue();

private:
 NodeType7* front;
 NodeType7* rear;
};

#endif
