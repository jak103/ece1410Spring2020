#ifndef CARS_HPP
#define CARS_HPP
#include <string>

class Vehicle
{
  public:
    std::string print();
};

class Car : public Vehicle
{
  public:

    virtual std::string getName() = 0;
    std::string print();
};


class Viper : public Car
{
  public:
    std::string getName()
    {      
      return "Viper";
    }

    std::string print()
    {
      
    }
};

class GeoMetro : public Car
{
  public:
    std::string getName()
    {
      return "Geo Metro";
    }
};

#endif


