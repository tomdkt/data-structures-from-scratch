#pragma once
#include <iostream>
using namespace std;

class AlunoTree6 {
private :
  int ra;
  std::string nome;

public:
  AlunoTree6();

  AlunoTree6(int ra, std::string nome);

  string getNome() const;

  int getRa() const;
};
