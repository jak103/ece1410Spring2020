#ifndef DODGE_VIPER_HPP
#define DODGE_VIPER_HPP

#include <iostream>
#include "LandVehicle.hpp"

using namespace std;

class DodgeViper : public LandVehicle
{
  public:
    DodgeViper() : LandVehicle(4)
    {

    }

    void go()
    {
      cout << "whoa...." << endl;
    }

    void stop()
    {
      cout << "on a dime" << endl;
    }

};

#endif