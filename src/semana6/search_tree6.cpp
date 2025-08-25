#include "search_tree6.h"

void SearchTree6::destroyTree(NodeType*& tree)
{
  if (tree != NULL)
  {
    // pos-ordem
    destroyTree(tree->esquerda);
    destroyTree(tree->direita);
    delete tree;
  }
}

bool SearchTree6::isEmpty() const
{
  return root == NULL;
}

bool SearchTree6::isFull() const
{
  try
  {
    const auto* location = new NodeType;
    delete location;
    return false;
  }
  catch (std::bad_alloc exception)
  {
    return true;
  }
}

void SearchTree6::retrieveAluno(NodeType* tree,
                                AlunoTree6& aluno,
                                bool& found) const
{
  if (tree == NULL)
    found = false;
  else if (aluno.getRa() < tree->aluno.getRa())
    retrieveAluno(tree->esquerda, aluno, found);
  else if (aluno.getRa() > tree->aluno.getRa())
    retrieveAluno(tree->direita, aluno, found);
  else
  {
    aluno = tree->aluno;
    found = true;
  }
}

void SearchTree6::insertAluno(NodeType*& tree, AlunoTree6 aluno)
{
  if (tree == NULL)
  {
    tree = new NodeType;
    tree->direita = NULL;
    tree->esquerda = NULL;
    tree->aluno = aluno;
  }
  else if (aluno.getRa() < tree->aluno.getRa())
    insertAluno(tree->esquerda, aluno);
  else
    insertAluno(tree->direita, aluno);
}

void SearchTree6::deleteAluno(NodeType*& tree, int aluno)
{
  if (aluno < tree->aluno.getRa())
    deleteAluno(tree->esquerda, aluno);
  else if (aluno > tree->aluno.getRa())
    deleteAluno(tree->direita, aluno);
  else if (aluno == tree->aluno.getRa())
    deleteNode(tree);
}

void SearchTree6::deleteNode(NodeType*& tree)
{
  AlunoTree6 data;
  NodeType* tempPtr;
  tempPtr = tree;
  if (tree->esquerda == NULL)
  {
    tree = tree->direita;
    delete tempPtr;
  }
  else if (tree->direita == NULL)
  {
    tree = tree->esquerda;
    delete tempPtr;
  }
  else
  {
    getSuccessor(tree, data);
    tree->aluno = data;
    deleteAluno(tree->direita, data.getRa());
  }
}

void SearchTree6::getSuccessor(NodeType* tree, AlunoTree6& data)
{
  tree = tree->direita;
  while (tree->esquerda != NULL)
    tree = tree->esquerda;
  data = tree->aluno;
}

void SearchTree6::printPreOrder(NodeType* tree) const
{
  if (tree != NULL)
  {
    std::cout << tree->aluno.getNome() << " , ";
    printPreOrder(tree->esquerda);
    printPreOrder(tree->direita);
  }
}

void SearchTree6::printInOrder(NodeType* tree) const
{
  if (tree != NULL)
  {
    printInOrder(tree->esquerda);
    std::cout << tree->aluno.getNome() << " , ";
    printInOrder(tree->direita);
  }
}

void SearchTree6::printPostOrder(NodeType* tree) const
{
  if (tree != NULL)
  {
    printPostOrder(tree->esquerda);
    printPostOrder(tree->direita);
    std::cout << tree->aluno.getNome() << " , ";
  }
}
