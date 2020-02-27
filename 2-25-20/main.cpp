#include <iostream>

using namespace std;

#include "Garage.hpp"
#include "Cars.hpp"

// new & delete
// operator []
// polymorphism
// scope resolution to call base class functions
// Outline the bank
#include <string>


int main()
{
  cout << "How many Vipers would you like?" << endl;
  int size = 0;
  std::string temp;
  cin >> size;
  Garage garage(size);

  for (int i = 0 ; i < size; ++i)
  {
    garage[i] = new Viper();
  }

  cout << garage << endl;
  cout << "Garage size: " << garage.getSize() << endl;
  
  garage.remodel(100);

  cout << "New garage size: " << garage.getSize() << endl;
  cout << garage << endl;
  
  return 0;
}