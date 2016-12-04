#ifndef CSC335_TEMPLATEQUEUE_H
#define CSC335_TEMPLATEQUEUE_H

#include <iostream>
using namespace std;
template <typename QueueElement>

class TemplateQueue {

public:
    TemplateQueue();
    TemplateQueue(const TemplateQueue &initial);
    ~TemplateQueue();
    const TemplateQueue &operator=(const TemplateQueue &copyQueue);
    bool empty() const;
    void enqueue(const QueueElement &value);
    const void display(ostream & out);
    QueueElement front() const;
    void dequeue();
private:
    class Node {
    public:
        QueueElement data;
        Node *next;
        Node(QueueElement value, Node * link = 0){
            data = value;
            next = link;
        }
    };
    Node *_front;
    Node *_back;

};

ostream & operator<<(ostream &out, TemplateQueue<QueueElement> queue);

template <typename QueueElement>
TemplateQueue<QueueElement>::TemplateQueue(): _front(0), _back(0) {}

template <typename QueueElement>
TemplateQueue<QueueElement>::TemplateQueue(const TemplateQueue &initial){
    _front = 0;
    _back = 0;
    if (!initial.empty()){
        _front = _back = new TemplateQueue::Node(initial.front());
        Node *  orig = initial._front->next;
        while (orig != 0){
            _back -> next = new Node(orig -> data);
            _back = _back -> next;
            orig = orig -> next;
        }
    }
}

template <typename QueueElement>
TemplateQueue<QueueElement>::~TemplateQueue(){
    Node *prev = _front;
    Node *ptr;
    while (prev != 0){
        ptr = prev -> next;
        delete prev;
        prev = ptr;
    }
}

template <typename QueueElement>
const TemplateQueue<QueueElement> &TemplateQueue<QueueElement>::operator=(const TemplateQueue &copyQueue){
    if (this != &copyQueue){
        this -> ~TemplateQueue();
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

template <typename QueueElement>
bool TemplateQueue<QueueElement>::empty() const{
    return (_front == 0);
}

template <typename QueueElement>
void TemplateQueue<QueueElement>::enqueue(const QueueElement &value){
    TemplateQueue::Node *ptr = new Node(value);
    if (empty()){
        _front = ptr;
        _back = ptr;
    } else {
        _back -> next = ptr;
        _back = ptr;
    }
}

template <typename QueueElement>
const void TemplateQueue<QueueElement>::display(ostream &out){
    Node * ptr;
    for (ptr = _front; ptr != 0; ptr = ptr -> next){
        out << ptr -> data << " ";
    }
    out << endl;
}

template <typename QueueElement>
QueueElement TemplateQueue<QueueElement>::front() const{
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

template <typename QueueElement>
void TemplateQueue<QueueElement>::dequeue(){
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


ostream & operator<<(ostream& out, TemplateQueue<QueueElement> queue){
    queue.display(out);
    return out;
}

#endif //CSC335_TEMPLATEQUEUE_H
