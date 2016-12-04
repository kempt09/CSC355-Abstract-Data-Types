#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack():_top(-1){}

const bool Stack::empty(){
    return (_top == -1);
}

void Stack::push(const StackElement &value){
    if (_top < CAPACITY - 1){
        ++_top;
        _array[_top] = value;
    } else {
        cout << "Stack full" << endl;
    }
}

const void Stack::display(ostream &out){
    for (int i = _top; i >= 0; i--){
        out << _array[i] << endl;
    }
}

const StackElement Stack::top(){
    if (!empty()){
        return (_array[_top]);
    } else {
        cerr << "Stack empty" << endl;
        return *(new StackElement);
    }
}

void Stack::pop(){
    if (!empty()){
        _top--;
    }
}
