#include <iostream>
#include <string>

#include "Person.hpp"

using namespace std;

int main()
{
  Person tom("Thomas", "Knight", "555-555-5555");
  int junk;

  cout << "Hello " << tom.getFirstName() << " " << tom.getLastName() << endl;

  Person bob;
  cout << "Bob's number: " << bob.getPhoneNumber("Jacob") << endl;
  cout << "Bob's number: " << bob.getPhoneNumber("Melinda") << endl;

  // Parsing 4/2 + 4/1
  // float num1;
  // int den1;
  // char operand;
  // int num2;
  // int den2;
  // char slash;
  // cout << "Input a fraction equation: ";
  // cin >> num1 >> slash >> den1 >> operand >> num2 >> slash >> den2;

  // cout << "Num1: " << num1 << endl;
  // cout << "Den1: " << den1 << endl;
  // cout << "Operand: " << operand << endl;
  // cout << "Num2: " << num2 << endl;
  // cout << "Den2: " << den2 << endl;
  
  int a = 7;
  int b = 9;

  cout << "The address of a: " << &a << endl;
  cout << "The address of b: " << &b << endl;
  cout << "size of int: " << sizeof(int) << endl;
  cout << "string sizeof: " << sizeof(string) << endl;
  cout << "size of person: " << sizeof(Person) << endl;

  return 0;
}