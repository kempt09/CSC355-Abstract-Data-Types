#ifndef CSC335_LINKEDSTACK_H
#define CSC335_LINKEDSTACK_H
#include <iostream>
using namespace std;
typedef int StackElement;

class LinkedStack {
public:
    LinkedStack();
    LinkedStack(const LinkedStack &initial);
    ~LinkedStack();
    LinkedStack & operator=(const LinkedStack &copyStack);
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


#endif //CSC335_LINKEDSTACK_H
