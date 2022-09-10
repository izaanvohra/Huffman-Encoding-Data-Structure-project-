#pragma once
// class Queue for further implementation
// using template
template <class x>
class Queue
{
public:
    x* arr;       // array to store Queue elements
    int capacity; // maximum capacity of the Queue
    int front;    // front points to the front element in the Queue (if any)
    int rear;     // rear points to the last element in the Queue
    int count;    // ind size of the Queue

public:
    Queue(int size = 50); // constructor

    // functions
    x dequeue();
    void enqueue(x);
    x peek();
    int size();
    bool isEmpty();
    bool isFull();
};
