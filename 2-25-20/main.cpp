#include <iostream>

using namespace std;

#include "Garage.hpp"
#include "Cars.hpp"

// new & delete
// operator []
// polymorphism
// scope resolution to call base class functions
// Outline the bank


int main()
{
  cout << "My cars" << endl;
  Garage garage;
  garage[0] = new Viper();
  garage[1] = new GeoMetro();

  cout << garage << endl;

  return 0;
}