#ifndef CSC335_TEMPLATELIST_H
#define CSC335_TEMPLATELIST_H

#include <iostream>
using namespace std;
template <typename ListElement>

class TemplateList {

public:

    TemplateList();
    TemplateList(const TemplateList &initial);
    ~TemplateList();
    const TemplateList &operator=(const TemplateList &copyList);
    void insert(ListElement value, int index);
    void remove(int index);
    bool empty();
    void display(ostream &out) const;
    const int length();

private:

    class Node {

    public:
        Node():next(NULL){}
        Node(ListElement value, Node *nptr = NULL){ data = value;}
        ListElement data;
        Node *next;
    };

    int _size;
    Node *_first;
};

template <typename ListElement>
TemplateList<ListElement>::TemplateList(){
    _first = NULL;
    _size = 0;
}

template <typename ListElement>
TemplateList<ListElement>::TemplateList(const TemplateList &initial){
    _size = initial._size;
    _first = NULL;
    Node *copyPtr;
    Node *ptr;
    _first = new Node(initial._first -> data);
    ptr = _first;
    copyPtr = initial._first -> next;
    while(copyPtr != NULL){
        ptr -> next = new Node(copyPtr -> data);
        copyPtr = copyPtr -> next;
        ptr = ptr-> next;
    }
}

template <typename ListElement>
TemplateList<ListElement>::~TemplateList() {
    Node *ptr_one;
    Node *ptr_two;
    ptr_one = _first;
    while(ptr_one != NULL){
        ptr_two = ptr_one;
        ptr_one = ptr_one -> next;
        delete ptr_two;
    }
}

template <typename ListElement>
bool TemplateList<ListElement>::empty(){
    return _size == 0;
}

template <typename ListElement>
const TemplateList<ListElement> &TemplateList<ListElement>::operator=(const TemplateList &copyList){
    _size = copyList._size;
    _first = NULL;
    if(_size == 0){
        return *this;
    }
    if(this != &copyList){
        this -> ~TemplateList();
        Node* ptr_one;
        Node* ptr_two;
        ptr_one = new Node(copyList._first-> data);
        ptr_two = ptr_one;
        ptr_one = copyList._first -> next;
        while(ptr_one != NULL){
            ptr_two -> next = new Node(ptr_one -> data);
            ptr_one = ptr_one -> next;
            ptr_two = ptr_two -> next;
        }
    }
    return *this;
}

template <typename ListElement>
void TemplateList<ListElement>::insert(ListElement value, int index) {
    if (index < 0 || index > _size){
        cout << "Index error" << endl;
        return;
    }
    _size++;
    Node* ptr_one = new Node(value);
    Node* prevPtr = _first;
    if(index == 0){
        ptr_one -> next = _first;
        _first = ptr_one;
    } else {
        for (int i = 1; i < index; i++){
            prevPtr = prevPtr -> next;
        }
        ptr_one -> next = prevPtr -> next;
        prevPtr -> next = ptr_one;
    }
}

template <typename ListElement>
void TemplateList<ListElement>::remove(int index) {
    if(index < 0 || index > _size) {
        cout << "Index error" << endl;
        return;
    }
    Node *ptr;
    Node *prevPtr = _first;
    if(index == 0){
        ptr = _first;
        _first = ptr -> next;
        delete ptr;
    } else {
        for(int i = 1; i < index - 1; i++){
            prevPtr = prevPtr -> next;
        }
        ptr = prevPtr -> next;
        prevPtr -> next = ptr -> next;
        delete ptr;
    }
    _size--;
}

template <typename ListElement>
void TemplateList<ListElement>::display(ostream&  out) const {
    Node* ptr = _first;
    while (ptr != NULL){
        out << ptr->data << " ";
        ptr = ptr->next;
    }
    out << "\n";
}

template <typename ListElement>
const int TemplateList<ListElement>::length(){
    Node *ptr_one;
    int count = 0;
    ptr_one = _first;
    while(ptr_one != NULL){
        ptr_one = ptr_one -> next;
        count++;
    }
    return count;
};

#endif //CSC335_TEMPLATELIST_H
