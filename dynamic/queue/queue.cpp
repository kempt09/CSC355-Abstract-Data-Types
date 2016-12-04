#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int size){
    _array = new QueueElement[size];
    _front = 0;
    _back = 0;
    _capacity = size;
}

Queue::Queue(const Queue &initial):_capacity(initial._capacity), _front(initial._front), _back(initial._back){
    _array = new QueueElement[_capacity];
    for (int i = _front; i != _back; i = (i + 1) % _capacity){
        _array[i] = initial._array[i];
    }
}

Queue::~Queue(){
    delete[] _array;
}

const Queue &Queue::operator=(const Queue &copyQueue){
    if(this != &copyQueue){
        if (_capacity != copyQueue._capacity){
            delete[] _array;
            _capacity = copyQueue._capacity;
            _array = new QueueElement[_capacity];
        }
    }
    _front = copyQueue._front;
    _back = copyQueue._back;
    for (int i = _front; i != _back; i = (i + 1) % _capacity){
        _array[i] = copyQueue._array[i];
    }
    return *this;
}

const bool Queue::empty(){
    return _front == _back;
}

void Queue::enqueue(const QueueElement &value){
    if ((_back + 1) % _capacity == _front){
        cout << " Queue is full" << endl;
    } else {
        _array[_back] = value;
        _back = (_back + 1) % _capacity;
    }
}

const QueueElement Queue::front(){
    if (_front == _back){
        cout << "Queue is empty" << endl;
        return *(new QueueElement);
    } else {
        return _array[_front];
    }
}

void Queue::dequeue(){
    if (_front == _back){
        cout << " queue is empty" << endl;
    } else {
        _front = (_front + 1) % _capacity;
    }
}

const void Queue::display(ostream &out){
    for (int i = _front; i != _back; i = (i + 1) % _capacity){
        cout << _array[i] << " ";
    }
    cout << endl;
}

ostream & operator << (ostream &out, Queue queue){
    queue.display(out);
    return out;
}