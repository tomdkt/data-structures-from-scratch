#include "stackLinkedList.h"
#include <cstddef> // Para funcionar o NULL
#include <new>

#include <iostream>
using namespace std;

StackLinkedList::StackLinkedList() {
  structure = NULL;
}

StackLinkedList::~StackLinkedList() {
  NodeType *tempPtr;
  while (structure != NULL) {
    tempPtr = structure;
    structure = structure->next;
    delete tempPtr;
  }
}

bool StackLinkedList::isEmpty() const {
  return (structure == NULL);
}

/*
  Aqui eu simplesmente verifico se o usuário possui memória
  disponível para alocar um novo elemento.
*/
bool StackLinkedList::isFull() const {
  NodeType *location;
  try {
    location = new NodeType;
    delete location;
    return false;
  } catch (std::bad_alloc exception) {
    return true;
  }
}

/*
  Adicionar um novo item no topo da pilha. O nó que acabamos de criar
  deve apontar para quem estava no topo da pilha e o ponteiro
  structure deverá apontar para o novo nó.
 */
void StackLinkedList::push(ItemType item) {
  if (isFull()) {
    throw "StackLinkedList is already full!";
  }
  NodeType *location = new NodeType;
  location->info = item;
  location->next = structure;
  structure = location;
}

/*
  Devolve o objeto que está no topo da pilha. 
 */
ItemType StackLinkedList::pop() {
  if (isEmpty()) {
    throw "StackLinkedList is empty!";
  }
  NodeType *tempPtr = structure;
  const ItemType item = structure->info;
  structure = structure->next;
  delete tempPtr;
  return item;
}

void StackLinkedList::print() const {
  NodeType *tempPtr = structure;
  while (tempPtr != NULL) {
    cout << tempPtr->info;
    tempPtr = tempPtr->next;
  }
  cout << endl;
}

