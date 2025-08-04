#ifndef STACK_LINKED_LIST_H
#define STACK_LINKED_LIST_H
#include "node_type.h"

#include "node_type.h"

class StackLinkedList {
public:
 StackLinkedList(); // Construtor
 ~StackLinkedList(); // Destrutor
 bool isEmpty() const;

 bool isFull() const;

 void print() const;

 void push(ItemType);

 ItemType pop();

private:
 NodeType *structure;
};


#endif
