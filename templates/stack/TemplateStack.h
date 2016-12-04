#ifndef CSC335_TEMPLATESTACK_H
#define CSC335_TEMPLATESTACK_H

#include <iostream>
using namespace std;
template<typename StackElement>

class TemplateStack {

public:
    TemplateStack();
    TemplateStack(const TemplateStack &initial);
    ~TemplateStack();
    TemplateStack &operator=(const TemplateStack &copyStack);
    bool empty() const;
    void push(const StackElement & value);
    const void display(ostream & out);
    StackElement top() const;
    void pop();

private:
    class Node {
    public:
        StackElement data;
        Node *next;
        Node(StackElement value, Node *link = 0){
            data = value;
            next = link;
        }

    };
    Node* _top;
};


template <typename StackElement>
TemplateStack<StackElement>::TemplateStack(): _top(0){}

template <typename StackElement>
TemplateStack<StackElement>::TemplateStack(const TemplateStack &initial){
    _top = 0;
    if (!initial.empty()){
        _top = new TemplateStack::Node(initial.top());
        Node *last = _top;
        Node *orig = initial._top -> next;

        while (orig != 0)
        {
            last -> next = new TemplateStack::Node(initial._top -> data);
            last = last -> next;
            orig = orig -> next;
        }
    }
}

template <typename StackElement>
TemplateStack<StackElement>::~TemplateStack(){
    Node *cur = _top;
    Node *next;
    while (cur != 0){
        next = cur -> next;
        delete cur;
        cur = next;
    }
}

template <typename StackElement>
TemplateStack<StackElement> &TemplateStack<StackElement>::operator=(const TemplateStack &copyStack){
    _top = 0;
    if (copyStack.empty()){
        return *this;
    }
    if (this != &copyStack){
        this -> ~TemplateStack();
        _top = new TemplateStack::Node(copyStack.top());
        Node *last = _top;
        Node *orig = copyStack._top -> next;
        while (orig != 0){
            last -> next = new TemplateStack::Node(orig -> data);
            last = last -> next;
            orig = orig -> next;
        }
    }
    return *this;
}

template <typename StackElement>
bool TemplateStack<StackElement>::empty() const{
    return (_top == 0);
}

template <typename StackElement>
void TemplateStack<StackElement>::push(const StackElement &value){
    _top = new TemplateStack::Node(value, _top);
}

template <typename StackElement>
const void TemplateStack<StackElement>::display(ostream &out){
    Node *ptr;
    for (ptr = _top; ptr != 0; ptr = ptr -> next){
        out << ptr -> data << endl;
    }
}

template <typename StackElement>
StackElement TemplateStack<StackElement>::top() const{
    if (!empty()) {
        return (_top -> data);
    } else {
        cerr << "Stack is empty" << endl;
        return *(new StackElement);
    }
}

template <typename StackElement>
void TemplateStack<StackElement>::pop(){
    if (!empty()){
        Node *ptr = _top;
        _top = _top -> next;
        delete ptr;
    } else {
        cerr << "Stack is Empty" << endl;
    }
}


#endif //CSC335_TEMPLATESTACK_H
