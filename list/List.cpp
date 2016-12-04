#include "List.h"
#include <cassert>
using namespace std;

List::List(int maxSize): _size(0), _capacity(maxSize){
    _array_ptr = new ElementType[maxSize];
    assert(_array_ptr != 0);
}

List::~List(){
    delete[] _array_ptr;
}

List::List(const List &initial): _size(initial._size), _capacity(initial._capacity){
    _array_ptr = new ElementType[_capacity];
    if (_array_ptr != 0){
        for (int i = 0; i < _capacity; i++){
            _array_ptr[i] = initial._array_ptr[i];
        }
    } else {
        cerr << "No Memory" << endl;
        exit(1);
    }
}

List & List::operator=(const List &copyList){
    if (this != &copyList){
        _size = copyList._size;
        _capacity = copyList._capacity;
        if (_capacity != copyList._capacity){
            delete[] _array_ptr;
            _array_ptr = new ElementType[_capacity];
        }
        for (int i = 0; i < _size; i++){
            _array_ptr[i] = copyList._array_ptr[i];
        }
    }
    return *this;
}

const bool List::empty(){
    return _size == 0;
}

const void List::display(ostream &out){
    for (int i = 0; i < _size; i++){
        out << _array_ptr[i] << "  ";
    }
    cout << endl;
}

ostream & operator<< (ostream & out, List &list){
    list.display(out);
    return out;
}

void List::insert(ElementType item, int pos){
    if (_size == _capacity){
        cerr << "No Space" << endl;
        exit(1);
    }
    if (pos < 0 || pos > _size){
        cerr << "*** Illegal Insertion" << pos << endl;
        return;
    }
    for (int i = _size; i > pos; i--){
        _array_ptr[i] = _array_ptr[i - 1];
    }
    _array_ptr[pos] = item;
    _size++;
}

void List::erase(int position){
    if (_size == 0){
        cerr << "List Is Empty" << endl;
        return;
    }
    if (position < 0 || position >= _size){
        cerr << "Illegal Deletion" << position << endl;
        return;
    }
    for (int i = position; i < _size; i++){
        _array_ptr[i] = _array_ptr[i + 1];
    }
    _size--;
}