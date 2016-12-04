#ifndef CSC335_STACK_H
#define CSC335_STACK_H

#include <iostream>
using namespace std;
const int CAPACITY = 120;
typedef int StackElement;

class Stack {

public:
    Stack();
    const bool empty();
    void push(const StackElement &value);
    const void display(ostream &out);
    const StackElement top();
    void pop();
private:
    StackElement _array[CAPACITY];
    int _top;

};


#endif //CSC335_STACK_H
