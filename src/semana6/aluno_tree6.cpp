#include "aluno_tree6.h"

AlunoTree6::AlunoTree6()
{
  this->ra = -1;
  this->nome = "";
};

AlunoTree6::AlunoTree6(int ra, std::string nome)
{
  this->ra = ra;
  this->nome = nome;
}

string AlunoTree6::getNome() const
{
  return nome;
}

int AlunoTree6::getRa() const
{
  return ra;
}
