#pragma once
#include <cstddef>
#include <iostream>
#include "aluno_tree6.h"

/*
  Estrutura usada para 
  guardar a informação 
  e os endereços das
  subárvores
 */
struct NodeType
{
    AlunoTree6 aluno;
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
class SearchTree6
{
public:
    SearchTree6() { root = NULL; }
    ~SearchTree6() { destroyTree(root); }

    bool isEmpty() const;

    bool isFull() const;

    void retrieveAluno(AlunoTree6& item, bool& found) const
    {
        retrieveAluno(root, item, found);
    }

    void insertAluno(AlunoTree6 item) { insertAluno(root, item); }
    void deleteAluno(int item) { deleteAluno(root, item); }
    void printPreOrder() const { printPreOrder(root); }
    void printInOrder() const { printInOrder(root); }
    void printPostOrder() const { printPostOrder(root); }

private:
    void destroyTree(NodeType*& tree);

    void retrieveAluno(NodeType* tree,
                       AlunoTree6& item,
                       bool& found) const;

    void insertAluno(NodeType*& tree, AlunoTree6 item);

    void deleteAluno(NodeType*& tree, int item);

    void deleteNode(NodeType*& tree);

    void getSuccessor(NodeType* tree, AlunoTree6& data);

    void printTree(NodeType* tree) const;

    void printPreOrder(NodeType* tree) const;

    void printInOrder(NodeType* tree) const;

    void printPostOrder(NodeType* tree) const;

    //  Raiz da árvore binária de busca.
    NodeType* root;
};
