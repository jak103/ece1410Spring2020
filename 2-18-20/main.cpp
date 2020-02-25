#include <iostream>

#include "LandVehicle.hpp"
#include "Bicycle.hpp"
#include "DodgeViper.hpp"

using namespace std;

int main()
{
  LandVehicle* garage[2];

  cout << "Hello Andrew!" << endl;

  garage[0] = new Bicycle();
  garage[1] = new DodgeViper();

  for (int i = 0; i < 2; ++i)
  {
    garage[i]->stop();
  }


  return 0;
}