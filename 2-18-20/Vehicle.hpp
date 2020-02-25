#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>

using namespace std;


class Vehicle
{
  public:
    Vehicle()
    {

    }
    virtual void go() = 0;

    // virtual void stop()
    // {
    //   cout << "default stopped" << endl;
    // }

  protected:

};

#endif
