#include <iostream>
#include <string>

using namespace std;


class Fraction
{
  public:
    int numerator;
    int denominator;

    string reduce()
    {

    }
};


class Stuff
{
public:
  int something;
  float number;

  float add()
  {
    return number + something;
  }
};


int main()
{
  int input;
  char letter;

  Stuff data;

  data.something = 4;
  data.number = 3.14;

  cout << "Stuff.add: " << data.add() << endl;

  std::cout <<  "Hello World " << 9 + 9 << std::endl;

  cout << "Enter a number and a letter: ";
  cin >> input >> letter;

  cout << "You entered: " << input << " and a " << letter << endl;

  return 0;
}