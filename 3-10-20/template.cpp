#include <iostream>
#include <string>

using namespace std;

class Node
{
  public:
    Node(int data);
    int data;
    Node* next;
};


class List
{
  public:
    List();
    void insert(int item);
    int remove(int item);
    int find(int item);

  private:
    Node* head;
};

class Stack
{
  public:
    Stack();
    void push(int item);
    int pop(void);
    int top(void);

  private:
    Node* pTop;
};

class Queue
{
  public:
    Queue();
    void enqueue(int item);
    int dequeue(void);
    int front(void);

  private:
    Node* pFront;
    Node* back;
};


template <typename bob, typename U>
bob add(bob a, U b)
{
  return a + b;
}

template <typename T>
T subtract(T a, T b)
{
  return a - b;
}

// int add(int a, int b)
// {
//   return a + b;
// }

// float add(float a, float b)
// {
//   return a + b;
// }

// string add(string a, string b)
// {
//   return a + b;
// }





int main()
{
  cout << "Hello World!" << endl;  


  cout << add<int>(1, 1) << endl;
  cout << add<int, float>(1, 1.1f) << endl;
  cout << add(string("Hello "), string("World")) << endl;







  // List myList;

  // myList.insert(2);
  // myList.insert(4);
  // myList.insert(6);
  // myList.insert(9);

  // //cout << myList << endl;

  // myList.remove(9);

  // //cout << myList << endl;


  // Stack myStack;

  // myStack.push(2);
  // myStack.push(4);
  // myStack.push(6);
  // myStack.push(9);

  // //cout << myStack << endl;

  // myStack.pop();

  // //cout << myStack << endl;

  return 0;
}

