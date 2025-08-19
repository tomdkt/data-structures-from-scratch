#include "aluno_tree.h"

AlunoTree::AlunoTree(){
  this->ra   = -1;
  this->nome = "";
};  
AlunoTree::AlunoTree(int ra, std::string nome){
  this->ra    = ra;
  this->nome  = nome;
}
string AlunoTree::getNome() const {
  return nome;
}
int AlunoTree::getRa() const{
  return ra;
}
