#ifndef CSC335_LINKEDQUEUE_H
#define CSC335_LINKEDQUEUE_H

#include <iostream>
using namespace std;
typedef int QueueElement;

class LinkedQueue {

public:
    LinkedQueue();
    LinkedQueue(const LinkedQueue &initial);
    ~LinkedQueue();
    const LinkedQueue operator=(const LinkedQueue &copyQueue);
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

ostream & operator<<(ostream &out, LinkedQueue queue);
#endif //CSC335_LINKEDQUEUE_H
