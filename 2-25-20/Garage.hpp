#ifndef GARAGE_HPP
#define GARAGE_HPP

#include <iostream>
#include "Cars.hpp"

class Garage
{
  public:
    Garage()
    {
      
    }

    Car*& operator [](int index)
    {
      return garage[index];
    }

  private:
    Car* garage[3];
};

std::ostream& operator << (std::ostream& out, Garage g)
{
  for (int i = 0; i < 2; ++i)
  {
    out << g[i]->getName() << std::endl;
  }

  return out;
}


#endif