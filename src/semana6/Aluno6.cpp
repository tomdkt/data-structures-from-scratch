#include "Aluno6.h"

Aluno6::Aluno6(){
  this->ra   = -1;
  this->nome = "";
};  
Aluno6::Aluno6(int ra, std::string nome){
  this->ra    = ra;
  this->nome  = nome;
}
string Aluno6::getNome() const {
  return nome;
}
int Aluno6::getRa() const{
  return ra;
}
