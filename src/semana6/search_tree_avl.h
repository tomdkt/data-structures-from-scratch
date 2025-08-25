#pragma once
#include <cstddef>
#include <iostream>
#include "aluno_tree_avl.h"

/*
  Estrutura usada para 
  guardar a informação 
  e os endereços das
  subárvores
 */
struct NodeType
{
    AlunoTreeAvl aluno;
    NodeType* esquerda;
    NodeType* direita;
};


/*
  A classe SearchTree é a que irá gerenciar todas as
  funções da árvore de busca. Você notará que essa
  árvore foi implementada com várias funções recursivas
  privadas e várias funções públicas que simplesmente
  invocam as funções privadas e fornecem algum valor
  para o parâmetro como ponto de partida.
 */
class SearchTreeAvl
{
public:
    SearchTreeAvl() { root = NULL; }
    ~SearchTreeAvl() { destroyTree(root); }

    bool isEmpty() const;

    bool isFull() const;

    void retrieveAluno(AlunoTreeAvl& item, bool& found) const
    {
        retrieveAluno(root, item, found);
    }

    void insertAluno(AlunoTreeAvl item) { insertAluno(root, item); }
    void deleteAluno(int item) { deleteAluno(root, item); }
    void printPreOrder() const { printPreOrder(root); }
    void printInOrder() const { printInOrder(root); }
    void printPostOrder() const { printPostOrder(root); }

private:
    void destroyTree(NodeType*& tree);

    void retrieveAluno(NodeType* tree,
                       AlunoTreeAvl& item,
                       bool& found) const;

    void insertAluno(NodeType*& tree, AlunoTreeAvl item);

    void deleteAluno(NodeType*& tree, int item);

    void deleteNode(NodeType*& tree);

    void getSuccessor(NodeType* tree, AlunoTreeAvl& data);

    void printTree(NodeType* tree) const;

    void printPreOrder(NodeType* tree) const;

    void printInOrder(NodeType* tree) const;

    void printPostOrder(NodeType* tree) const;

    //  Raiz da árvore binária de busca.
    NodeType* root;
};
