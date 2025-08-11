#ifndef HASH_H
#endif

#define HASH_H
#include "aluno.h"

class Hash {
public:
 Hash(int max_items = 100);

 ~Hash();

 bool isFull() const;

 int getLength() const;

 void retrieveItem(Aluno &aluno, bool &found) const;

 void insertItem(const Aluno &aluno);

 void deleteItem(const Aluno &aluno);

 void print() const;

private:
 int getHash(const Aluno &aluno) const;

 int max_items;
 int length;
 Aluno *structure;
};


