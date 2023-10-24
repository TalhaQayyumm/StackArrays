#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
private:
    int* arr;
    int capacity;
    int top;

public:
    Stack(int size);
    ~Stack();
    bool IsEmpty() const;
    bool IsFull() const;
    void Push(int value);
    int Pop();
};

#endif // STACK_H
