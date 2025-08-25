#include <cstddef>         // Para NULL.
#include <new>             // Para bad_alloc.
#include "Queue7.h"
#include <iostream>

#include "Queue7.h"
using namespace std;

Queue7::Queue7()
{
  front = NULL;
  rear = NULL;
}

Queue7::~Queue7()
{
  NodeType7* tempPtr;
  while (front != NULL)
  {
    tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = NULL;
}


bool Queue7::isFull() const
{
  NodeType7* location;
  try
  {
    location = new NodeType7;
    delete location;
    return false;
  }
  catch (std::bad_alloc exception)
  {
    return true;
  }
}

bool Queue7::isEmpty() const
{
  return (front == NULL);
}

void Queue7::enqueue(ItemType newItem)
{
  if (!isFull())
  {
    NodeType7* newNode;
    newNode = new NodeType7;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  }
  else
  {
    throw "Queue7 is already full!";
  }
}

ItemType Queue7::dequeue()
{
  if (!isEmpty())
  {
    NodeType7* tempPtr;
    tempPtr = front;
    ItemType item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;
    return item;
  }
  else
  {
    throw "Queue7 is empty!";
  }
}

void Queue7::print() const
{
  NodeType7* tempPtr = front;
  while (tempPtr != NULL)
  {
    cout << tempPtr->info.getNome();
    tempPtr = tempPtr->next;
  }
  cout << endl;
}
