#ifndef GARAGE_HPP
#define GARAGE_HPP

#include <iostream>
#include "Cars.hpp"

class Garage
{
  public:
    Garage(int size)
    {
      garage = new Car*[size];
      this->size = size;
    }

    Car*& operator [](int index)
    {
      return garage[index];
    }

    int getSize()
    {
      return size;
    }

    void remodel(int newSize)
    {
      Car** newGarage = new Car*[newSize];
      
      for (int i = 0; i < size; ++i)
      {
        newGarage[i] = garage[i];
      }
      
      delete [] garage;

      garage = newGarage; 
      size = newSize;
    }

  private:
    Car** garage;
    int size;
};

std::ostream& operator << (std::ostream& out, Garage g)
{
  for (int i = 0; i < g.getSize(); ++i)
  {
    if (g[i] != nullptr)
    {
      out << g[i]->getName() << std::endl;
    }
    else 
    {
      out << "Empty" << endl;
    }
  }

  return out;
}


#endif