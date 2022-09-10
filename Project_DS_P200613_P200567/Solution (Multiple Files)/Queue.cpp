#include "Queue.h"
#include <iostream>
using namespace std;

// function to return the front element of the Queue
template <class x>
x Queue<x>::peek()
{
    if (isEmpty())
    {
        cout << "UnderFlow" << endl;
    }
    return arr[front];
}

// function to return the size of the Queue
template <class x>
int Queue<x>::size()
{
    return count;
}

// function to check if the Queue is empty or not
template <class x>
bool Queue<x>::isEmpty()
{
    return (size() == 0);
}

// function to check if the Queue is full or not
template <class x>
bool Queue<x>::isFull()
{
    return (size() == capacity);
}
