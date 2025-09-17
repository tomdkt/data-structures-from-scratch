#include <cstddef>
#include <iostream>
#include "Aluno6.h"

/*
  Estrutura usada para 
  guardar a informação, 
  os endereços das
  subárvores e o fator
  de balanceamento.
 */
struct NodeType7
{
  Aluno6 aluno;
  int fatorB;
  NodeType7* esquerda;
  NodeType7* direita;
};

class AVLSearchTree
{
public:
  AVLSearchTree() { root = NULL; }
  ~AVLSearchTree() { destroyTree(root); }
  bool isEmpty() const;
  bool isFull() const;

  void retrieveAluno(Aluno6& item, bool& found) const
  {
    retrieveAluno(root, item, found);
  }

  void insertAluno(Aluno6 item)
  {
    bool isTaller;
    insertAluno(root, item, isTaller);
  }

  void deleteAluno(int item)
  {
    bool isShorter;
    deleteAluno(root, item, isShorter);
  }

  void printPreOrder() const { printPreOrder(root); }
  void printInOrder() const { printInOrder(root); }
  void printPostOrder() const { printPostOrder(root); }

private:
  void destroyTree(NodeType7*& tree);
  void retrieveAluno(NodeType7* tree,
                     Aluno6& item,
                     bool& found) const;
  void insertAluno(NodeType7*& tree, Aluno6 item, bool& isTaller);
  void deleteAluno(NodeType7*& tree, int item, bool& isShorter);
  void deleteNode(NodeType7*& tree, bool& isShorter);
  void getSuccessor(NodeType7* tree, Aluno6& data);
  void printTree(NodeType7* tree) const;
  void printPreOrder(NodeType7* tree) const;
  void printInOrder(NodeType7* tree) const;
  void printPostOrder(NodeType7* tree) const;

  void rotateToLeft(NodeType7*& tree) const;
  void rotateToRight(NodeType7*& tree) const;
  void rotateToLeftAndRight(NodeType7*& tree) const;
  void rotateToRightAndLeft(NodeType7*& tree) const;

  void performRotations(NodeType7*& tree) const;

  // Nó raiz da árvore.
  NodeType7* root;
};
