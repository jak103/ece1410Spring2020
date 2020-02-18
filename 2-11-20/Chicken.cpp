#include "Chicken.hpp"


Chicken::Chicken() {
  age = 0;

  for(int i = -200; i <= 100; i += 2)
  {
    
  }
}

std::string Chicken::makeSound() 
{
  return "cluck";
}