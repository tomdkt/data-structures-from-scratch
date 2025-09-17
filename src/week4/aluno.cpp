#include "aluno.h"

Aluno::Aluno() {
  this->ra = -1;
  this->nome = "";
};

Aluno::Aluno(const int ra, const std::string &nome) {
  this->ra = ra;
  this->nome = nome;
}

string Aluno::getNome() const {
  return nome;
}

int Aluno::getRa() const {
  return ra;
}
