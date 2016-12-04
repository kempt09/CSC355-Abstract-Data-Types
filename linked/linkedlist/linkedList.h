#ifndef CSC335_LINKEDLIST_H
#define CSC335_LINKEDLIST_H

#include <iostream>
using namespace std;
typedef int ElementType;

class LinkedList {

    public:

    LinkedList();
    LinkedList(const LinkedList &initial);
    ~LinkedList();
    const LinkedList &operator=(const LinkedList &copyList);
    void insert(ElementType value, int index);
    void remove(int index);
    bool empty();
    void display(ostream &out) const;
    const int length();

    private:

    class Node {

        public:
        Node():next(NULL){}
        Node(ElementType value, Node *nptr = NULL){ data = value;}
        ElementType data;
        Node *next;
    };

    int _size;
    Node *_first;
};


#endif
