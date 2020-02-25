#ifndef LAND_VEHICLE_HPP
#define LAND_VEHICLE_HPP

#include "Vehicle.hpp"

using namespace std;

class LandVehicle : public Vehicle
{
  public:
    LandVehicle(int tireCount)
    {
      this->tireCount = tireCount;
    }
    
    void go(int temp)
    {
      cout << "Vroom" << endl;
    }

    int getTireCount()
    {
      return tireCount;
    }

    virtual void stop()
    {
      cout << "screech!" << endl;
    }

  private:
    int tireCount;
};

#endif