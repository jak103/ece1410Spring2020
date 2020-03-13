#ifndef LIST_HPP
#define LIST_HPP

#include "Node.hpp"
#include <string>

template <typename T>
class List
{
public:
    List();
    void insert(T i);
    T at(int index);
    int count();
    bool contains(T data);
    void remove(T data);
    std::string toString(); // stringstream
    void reset();
    // T pop_front(); // Return front of list -->used for stack
private:
    Node<T>* head;
    Node<T>* tail;
    int count;
};


#endif // LIST_HPP