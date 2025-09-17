#include <iostream>
using namespace std;

class Aluno6
{
private :
  int ra;
  std::string nome;

public:
  Aluno6();
  Aluno6(int ra, std::string nome);
  string getNome() const;
  int getRa() const;
};
