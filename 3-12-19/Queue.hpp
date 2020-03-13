#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "List.hpp"
#include <string>

template <typename T>
class Queue
{
public:
    Queue();
    void enqueue(T data); // adds to list tail;
    T dequeue();          // Returns the data from head and deletes from list
    int count();          // data.count();
    T front();            // Retuns data from the list but does not delte;
    void reset();         // data.reset();
private:
    List<T> data;
};


#endif // QUEUE_HPP