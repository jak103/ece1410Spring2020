#include <iostream>

using namespace std;

#include "Duck.hpp"
#include "Chicken.hpp"
#include "Robin.hpp"

int main()
{
  cout << "Hello World!" << endl;

  Duck quack;
  Chicken peep;  
  Robin chirp;

  peep.scratch();
  //Bird big; Can't instantiate pure virtual classes

  cout << "Ducks go " << quack.makeSound() << endl;
  cout << "Chickens go " << peep.makeSound() << endl;
  cout << "Robins go " << chirp.makeSound() << endl;

  Bird* someBird = &quack;
  Bird* otherBird = &peep;

  cout << "Generic bird goes " << someBird->makeSound() << endl;
  cout << "Generic bird goes " << otherBird->makeSound() << endl;

  otherBird->scratch();

  return 0;
}
