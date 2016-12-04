#include <iostream>
#include "LinkedQueue.h"
using namespace std;

LinkedQueue::LinkedQueue(): _front(0), _back(0) {}
LinkedQueue::LinkedQueue(const LinkedQueue &initial){
    _front = 0;
    _back = 0;
    if (!initial.empty()){
        _front = _back = new LinkedQueue::Node(initial.front());
        Node *  orig = initial._front->next;
        while (orig != 0){
            _back -> next = new Node(orig -> data);
            _back = _back -> next;
            orig = orig -> next;
        }
    }
}
LinkedQueue::~LinkedQueue(){
    Node *prev = _front;
    Node *ptr;
    while (prev != 0){
        ptr = prev -> next;
        delete prev;
        prev = ptr;
    }
}

const LinkedQueue LinkedQueue::operator=(const LinkedQueue &copyQueue){
    if (this != &copyQueue){
        this -> ~LinkedQueue();
        if (copyQueue.empty()){
            _front = 0;
            _back = 0;
        } else {
            _front = _back = new Node(copyQueue.front());
            Node *ptr = copyQueue._front -> next;
            while(ptr != 0){
                _back -> next = new Node(ptr -> data);
                _back = _back -> next;
                ptr = ptr -> next;
            }
        }
    }
    return *this;
}

bool LinkedQueue::empty() const{
    return (_front == 0);
}
void LinkedQueue::enqueue(const QueueElement &value){
    LinkedQueue::Node *ptr = new Node(value);
    if (empty()){
        _front = ptr;
        _back = ptr;
    } else {
        _back -> next = ptr;
        _back = ptr;
    }
}

const void LinkedQueue::display(ostream &out){
    Node * ptr;
    for (ptr = _front; ptr != 0; ptr = ptr -> next){
        out << ptr -> data << " ";
    }
    out << endl;
}

QueueElement LinkedQueue::front() const{
    if (!empty()) {
        return (_front -> data);
    } else {
        cout << "Queue is Empty" << endl;
        QueueElement *temp = new(QueueElement);
        QueueElement garbage = *temp;
        delete temp;
        return garbage;
    }
}

void LinkedQueue::dequeue(){
    if (!empty()){
        Node *ptr = _front;
        _front = _front -> next;
        delete ptr;
        if (_front == 0){
            _back = 0;
        }
    } else {
        cout << "Queue is Empty" << endl;
    }
}

ostream & operator<<(ostream& out, LinkedQueue queue){
    queue.display(out);
    return out;
}
