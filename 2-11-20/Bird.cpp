#include <stdlib.h>


#include "Bird.hpp"


Bird::Bird()
{
  
}

float Bird::getAge()
{
  return age;
}

float Bird::getWeight()
{
  return weight;
}

float Bird::getLayRate()
{ 
  return layRate;
}

int Bird::lay()
{
  return rand() % 2;
}