#include <iostream>
#include "Stack.h"

using namespace std; // Add this line to use the std namespace

int main() {
    Stack stack(7);

    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);
    stack.Push(7);

    cout << "Is the stack empty? " << (stack.IsEmpty() ? "Yes" : "No") << endl;
    cout << "Is the stack full? " << (stack.IsFull() ? "Yes" : "No") << endl;

    cout << "Popped value: " << stack.Pop() << endl;
    cout << "Popped value: " << stack.Pop() << endl;

    return 0;
}
