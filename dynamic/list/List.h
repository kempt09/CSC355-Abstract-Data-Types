#ifndef CSC335_LIST_H
#define CSC335_LIST_H
#include <iostream>
using namespace std;
typedef int ElementType;

class List {
public:
    List(int maxSize = 1024);
    ~List();
    List(const List &initial);
    List & operator=(const List &copyList);
    const bool empty();
    void insert(ElementType value, int position);
    void erase(int position);
    const void display(ostream &out);
private:
    int _size;
    int _capacity;
    ElementType * _array_ptr;
};

ostream & operator<< (ostream &out, List &list);

#endif //CSC335_LIST_H
