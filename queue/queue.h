#ifndef CSC335_QUEUE_H
#define CSC335_QUEUE_H

#include <iostream>
using namespace std;
typedef int QueueElement;
class Queue {

public:
    Queue(int size = 120);
    Queue(const Queue &initial);
    ~Queue();
    const Queue & operator=(const Queue &copyQueue);
    const bool empty();
    void enqueue(const QueueElement &value);
    const void display(ostream &out);
    const QueueElement front();
    void dequeue();
private:
    int _front;
    int _back;
    int _capacity;
    QueueElement *_array;

};

ostream & operator << (ostream &out, Queue queue);
#endif //CSC335_QUEUE_H
