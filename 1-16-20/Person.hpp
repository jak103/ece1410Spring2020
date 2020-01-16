#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
  public:
    Person();
    Person(std::string firstName, std::string lastName, std::string phoneNumber);
    ~Person();

    std::string getFirstName();
    std::string getLastName();
    std::string getPhoneNumber();
    std::string getPhoneNumber(std::string whoIsAsking);

    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setPhoneNumber(std::string phoneNumber);
    void setPhoneNumber(int areaCode, int prefix, int end);

  private:
    std::string firstName;
    std::string lastName;

    std::string phoneNumber;

    float weight;
    int height;
};

#endif // PERSON_HPP