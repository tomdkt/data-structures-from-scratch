#include "aluno_tree_avl.h"

AlunoTreeAvl::AlunoTreeAvl()
{
  this->ra = -1;
  this->nome = "";
};

AlunoTreeAvl::AlunoTreeAvl(int ra, std::string nome)
{
  this->ra = ra;
  this->nome = nome;
}

string AlunoTreeAvl::getNome() const
{
  return nome;
}

int AlunoTreeAvl::getRa() const
{
  return ra;
}
