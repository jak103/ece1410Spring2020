#include <iostream>
#include "Person.hpp"

using namespace std;

int main()
{
  Person b;
  Person("Tom");

  Person someone("Conner");

  cout << someone.name << endl;

  return 0;
}