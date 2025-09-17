#include "queueLinkedList.h"
#include "stackLinkedList.h"
#include <iostream>
using namespace std;

// int main() {
//   bool palindrome = true;
//
//   char character;
//
//   StackLinkedList stack;
//   QueueLinkedList queue;
//   cout << "Adicione uma string." << endl;
//   cin.get(character);
//   while (character != '\n') {
//     stack.push(character);
//     queue.enqueue(character);
//     cin.get(character);
//   }
//   while (palindrome && !queue.isEmpty()) {
//     const char stackChar = stack.pop();
//     if (const char queueChar = queue.dequeue(); stackChar != queueChar)
//       palindrome = false;
//   }
//   if (palindrome)
//     cout << "String é Palindrome" << endl;
//   else
//     cout << "String não é palindrome" << endl;
//   return 0;
// }
