#ifndef BIRD_HPP
#define BIRD_HPP

#include <string>
#include "Utils.hpp"

class Bird
{
  public:
    Bird();
    float getAge();
    float getWeight();
    float getLayRate();
    int lay();
    virtual std::string makeSound() = 0;

  protected:
    float age;
    float weight;
    float layRate;
    RGB eggColor;
    RGB birdColor;

  private:
    void run();
};

#endif