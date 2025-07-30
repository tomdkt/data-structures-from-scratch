#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    ItemType character;
    Stack stack;

    cout << "Enter a character: " << endl;
    cin >> character;
    while (character != '\n') {
        stack.push(character);
        cin >> character;
    }

    while (!stack.isEmpty()) {
        const ItemType stackItem = stack.pop();
        cout << stackItem << endl;
    }

    cout << endl;
}
