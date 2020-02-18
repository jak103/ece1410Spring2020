#ifndef DUCK_HPP
#define DUCK_HPP

#include "Utils.hpp"

#include "Bird.hpp"

class Duck : public Bird
{
  public:
    Duck()
    {

    }

    std::string makeSound()
    {
      return "quack";
    }

  private:
};

#endif