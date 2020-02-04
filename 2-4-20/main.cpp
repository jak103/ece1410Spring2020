
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "Fraction.hpp"

#include "Utility.hpp"

using namespace std;


ostream& something();

istream& operator >> (istream& in, Fraction& fraction)
{
  int num;
  int den;
  char slash;
  in >> num >> slash >> den;

  fraction = Fraction(num, den);

  // fraction.setNum(num);
  // fraction.setDen(den);

  return in;
}

Fraction operator + (Fraction bob, Fraction shelby)
{
  Fraction result;

  //bob.num + shelby.num;
}

//Fraction operator + (string bob, Fraction shelby);

int main(void)
{
  Fraction a;
  Fraction b;
  string c = "3/4";

  a = a + b;
  a = a.operator-(b);
  
  operator+(a, b);

  cout << a;
  cin >> a >> b;

  stringstream stuff("4/5");

  stuff >> a;


  int i = 0;
  cin >> i;

  operator>>(cin, a);

  fstream file("myFraction.txt");

  file >> a;

  file << a;

  stuff << a;

  return 0;
}