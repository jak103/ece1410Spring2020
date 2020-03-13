#ifndef STACK_HPP
#define STACK_HPP

#include <string>
#include "List.hpp"
template <typename T>
class Stack
{
public:
    Stack();
    void push(T data);
    // {
    //     T returned_data = data.at(0);
    //     data.remove(returned_data);
    // }
    int count()
    {
        return data.count();
    }

    T pop(); // Deletes from the list
    T top(); // "Shows you" whats at the front
    void reset();
private:
    List<T> data;
};

#endif // STACK_HPP