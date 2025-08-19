#pragma once
#include <iostream>
using namespace std;

class AlunoTree {
private :
  int ra;
  std::string nome;

public:
  AlunoTree();

  AlunoTree(int ra, std::string nome);

  string getNome() const;

  int getRa() const;
};
