#include "Person.hpp"

#include <iostream>

Person::Person()
{
  std::cout << "Person default ctor" << std::endl;
}

Person::Person(std::string firstName, std::string lastName, std::string phoneNumber)
{
  std::cout << "Person ctor" << std::endl;
  this->firstName = firstName;
  this->lastName = lastName;
  this->phoneNumber = phoneNumber;
}

Person::~Person()
{
  std::cout << "Person dtor" << std::endl;
}

std::string Person::getFirstName()
{
  return firstName;
}

std::string Person::getLastName()
{
  return lastName;
}

std::string Person::getPhoneNumber()
{
  return phoneNumber;
}

std::string Person::getPhoneNumber(std::string whoIsAsking)
{
  std::string result = "Fake number";
  
  if (whoIsAsking == "Melinda")
  {
    result = phoneNumber;
  }

  return result;
}

void Person::setLastName(std::string lastName)
{
  this->lastName = lastName;
}

void Person::setPhoneNumber(std::string phoneNumber)
{
  this->phoneNumber = phoneNumber;
}

void Person::setFirstName(std::string firstName)
{
  this->firstName = firstName;
}