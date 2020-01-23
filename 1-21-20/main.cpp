#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    Person(string id)
    {
      cout << "Person ctor: " << id << endl;
      this->id = id;
    }

    ~Person()
    {
      cout << "Person dtor: " << id << endl;
    }

    Person(const Person& other)
    {
      cout << "Person copy ctor" << endl;
      this->id = other.id;
    }

  string id;

};

void something(Person jacob)
{
  cout << "Start something" << endl;
  Person bob("bob");
  cout << "jacob.id: " << jacob.id << endl;
  jacob.id = "Jacob";
  cout << "jacob.id: " << jacob.id << endl;
  cout << "End something" << endl;
}

int main()
{
  cout << "Start main" << endl;
  Person tom("tom");
  int a = 7;
  int* pNumber = NULL;
  int** pOther = &pNumber;
  Person* jay  = new Person("jay");

  // *pNumber = 9; Easy way to kill the program

  *(&a) = 3;

  // cout << "a: " << a << endl;

  //*pNumber = 9;
  // cout << "pNumber: " << *pNumber << endl;
  // cout << "pOther: " << *(*pOther) << endl;

  // cout << "int size is: " << sizeof(int) << endl;
  // cout << "Person size is: " << sizeof(Person) << endl;
  // cout << "int* size is: " << sizeof(int*) << endl;
  // cout << "Person* size is: " << sizeof(Person*) << endl;
  // cout << "void* size is: " << sizeof(void*) << endl;

  something(tom);
  cout << "tom.id: " << tom.id << endl;
  delete jay;
  cout << "End main" << endl;
}