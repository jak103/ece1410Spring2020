#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "Utils.hpp"
#include "Bird.hpp"

class Chicken : public Bird
{
  public:
    Chicken();

    std::string makeSound();

    void scratch();

  private:

};

#endif