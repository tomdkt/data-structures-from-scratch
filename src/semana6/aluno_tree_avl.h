#pragma once
#include <iostream>
using namespace std;

class AlunoTreeAvl
{
private :
  int ra;
  std::string nome;

public:
  AlunoTreeAvl();

  AlunoTreeAvl(int ra, std::string nome);

  string getNome() const;

  int getRa() const;
};
