#include "Stack.h"

Stack::Stack(int size) {
    capacity = size;
    arr = new int[capacity];
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

bool Stack::IsEmpty() const {
    return top == -1;
}

bool Stack::IsFull() const {
    return top == capacity - 1;
}

void Stack::Push(int value) {
    if (IsFull()) {
        // Stack overflow
        // You can handle this case as needed
    }
    else {
        arr[++top] = value;
    }
}

int Stack::Pop() {
    if (IsEmpty()) {
        // Stack underflow
        // You can handle this case as needed
        return -1; // Return an error value
    }
    else {
        return arr[top--];
    }
}
