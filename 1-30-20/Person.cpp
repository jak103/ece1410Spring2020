#include "Person.hpp"
#include <iostream>

Person::Person(std::string name)
{
  this->name = name;
}

std::string Person::getName()
{
  return name;
}

