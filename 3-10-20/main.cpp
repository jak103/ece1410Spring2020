#include <iostream>

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
    Node* top;
};

class Queue
{
  public:
    Queue();
    void enqueue(int item);
    int dequeue(void);
    int front(void);

  private:
    Node* front;
    Node* back;
};


int main()
{
  cout << "Hello World!" << endl;  

  List myList;

  myList.insert(2);
  myList.insert(4);
  myList.insert(6);
  myList.insert(9);

  cout << myList << endl;

  myList.remove(9);

  cout << myList << endl;


  Stack myStack;

  myStack.push(2);
  myStack.push(4);
  myStack.push(6);
  myStack.push(9);

  cout << myStack << endl;

  myStack.pop();

  cout << myStack << endl;

  return 0;
}

