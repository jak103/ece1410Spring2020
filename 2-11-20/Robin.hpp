#ifndef ROBIN_HPP
#define ROBIN_HPP

#include "Bird.hpp"

class Robin : public Bird
{
  public:

    std::string makeSound()
    {
      return "chirp";
    }
};


#endif