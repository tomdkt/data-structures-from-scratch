#pragma once
#ifndef ALUNO_H
#endif
#define ALUNO_H
#include <iostream>
using namespace std;

class Aluno {
private :
  int ra;
  std::string nome;

public:
  Aluno();

  Aluno(int ra, const std::string &nome);

  string getNome() const;

  int getRa() const;
};
