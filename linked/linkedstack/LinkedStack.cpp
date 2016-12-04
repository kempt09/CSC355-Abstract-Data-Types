#include "LinkedStack.h"
using namespace std;

LinkedStack::LinkedStack(): _top(0){}

LinkedStack::LinkedStack(const LinkedStack &initial){
    _top = 0;
    if (!initial.empty()){
        _top = new LinkedStack::Node(initial.top());
        Node *last = _top;
        Node *orig = initial._top -> next;

        while (orig != 0)
        {
            last -> next = new LinkedStack::Node(initial._top -> data);
            last = last -> next;
            orig = orig -> next;
        }
    }
}

LinkedStack::~LinkedStack(){
    Node *cur = _top;
    Node *next;
    while (cur != 0){
        next = cur -> next;
        delete cur;
        cur = next;
    }
}

LinkedStack &LinkedStack::operator=(const LinkedStack &copyStack){
    _top = 0;
    if (copyStack.empty()){
        return *this;
    }
    if (this != &copyStack){
        this -> ~LinkedStack();
        _top = new LinkedStack::Node(copyStack.top());
        Node *last = _top;
        Node *orig = copyStack._top -> next;
        while (orig != 0){
            last -> next = new LinkedStack::Node(orig -> data);
            last = last -> next;
            orig = orig -> next;
        }
    }
    return *this;
}

bool LinkedStack::empty() const{
    return (_top == 0);
}

void LinkedStack::push(const StackElement &value){
    _top = new LinkedStack::Node(value, _top);
}

const void LinkedStack::display(ostream &out){
    Node *ptr;
    for (ptr = _top; ptr != 0; ptr = ptr -> next){
        out << ptr -> data << endl;
    }
}

StackElement LinkedStack::top() const{
    if (!empty()) {
        return (_top -> data);
    } else {
        cerr << "Stack is empty" << endl;
        return *(new StackElement);
    }
}

void LinkedStack::pop(){
    if (!empty()){
        Node *ptr = _top;
        _top = _top -> next;
        delete ptr;
    } else {
        cerr << "Stack is Empty" << endl;
    }
}