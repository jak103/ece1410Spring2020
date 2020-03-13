#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>

template <typename T>
class Node
{
  public:
    Node(T data);
    Node() {};

    T m_data;
    Node<T>* m_next;
    // Node<T>* m_prev;
};

// return_type ClassName::function(params...)
// {
//   function definition;
// }

// This is a cpp file from here on
// #include "Node.hpp"

template <typename T> // T can be whatever
Node<T>::Node(T data)
{
  this->m_data = data;
  this->m_next = nullptr;
}




#endif // NODE_HPP