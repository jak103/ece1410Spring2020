#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
  public:
    Person(std::string name);
    std::string getName();

  private:
    std::string name;
};

#endif // PERSON_HPP