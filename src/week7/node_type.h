#ifndef NODETYPE_H
#define NODETYPE_H 

#include "vertex.h"

typedef Vertex ItemType;

struct NodeType7
{
  ItemType info;
  NodeType7* next;
};

#endif
