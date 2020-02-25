#ifndef BICYCLE_HPP
#define BICYCLE_HPP

#include <iostream>

#include "LandVehicle.hpp"

using namespace std;

class Bicycle : public LandVehicle
{
  public:
    Bicycle() : LandVehicle(2)
    {
      
    }

    void go()
    {
      cout << "pedal faster" << endl;
    }

    // void stop()
    // {
    //   cout << "skid" << endl;
    // }

};

#endif