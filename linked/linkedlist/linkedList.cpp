#include <iostream>
#include "linkedList.h"

using namespace std;

LinkedList::LinkedList(){
    _first = NULL;
    _size = 0;
}

LinkedList::LinkedList(const LinkedList &initial){
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


LinkedList::~LinkedList() {
    Node *ptr_one;
    Node *ptr_two;
    ptr_one = _first;
    while(ptr_one != NULL){
        ptr_two = ptr_one;
        ptr_one = ptr_one -> next;
        delete ptr_two;
    }
}

bool LinkedList::empty(){
    return _size == 0;
}

const LinkedList &LinkedList::operator=(const LinkedList &copyList){
    _size = copyList._size;
    _first = NULL;
    if(_size == 0){
        return *this;
    }
    if(this != &copyList){
        this -> ~LinkedList();
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

void LinkedList::insert(ElementType value, int index) {
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

void LinkedList::remove(int index) {
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

void LinkedList::display(ostream&  out) const {
    Node* ptr = _first;
    while (ptr != NULL){
        out << ptr->data << " ";
        ptr = ptr->next;
    }
    out << "\n";
}

const int LinkedList::length(){
    Node *ptr_one;
    int count = 0;
    ptr_one = _first;
    while(ptr_one != NULL){
        ptr_one = ptr_one -> next;
        count++;
    }
    return count;
};

