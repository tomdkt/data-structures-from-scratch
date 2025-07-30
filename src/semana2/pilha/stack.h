//
// Created by thomas on 7/30/25.
//

#ifndef STACK_H
#define STACK_H
#include "item_type.h"

constexpr int MAX_SIZE = 100;

class Stack {
public:
  Stack();

  ~Stack();

  bool isEmpty() const;

  bool isFull() const;

  void print();

  void push(ItemType);

  ItemType pop();

  void print() const;

private:
  int length;
  ItemType *structure;
};

#endif
