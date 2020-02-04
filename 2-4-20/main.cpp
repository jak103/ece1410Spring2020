
#include <iostream>
#include <string>

using namespace std;

class Fraction
{
  public:
    Fraction();
    Fraction(int num, int den);

    int getNum() const;
    int getDen() const;
   
    friend Fraction operator + (Fraction bob, Fraction shelby);
    
    Fraction operator - (Fraction other);

  private:
    int num;
    int den;

};

ostream& operator << (ostream& out, Fraction fraction)
{
  out << fraction.getNum() << "/" << fraction.getDen();

  return out;
}

istream& operator >> (istream& in, Fraction& fraction)
{

}

Fraction operator + (Fraction bob, Fraction shelby)
{
  Fraction result;

  bob.num + shelby.num;
}

Fraction operator + (string bob, Fraction shelby);

int main(void)
{
  Fraction a;
  Fraction b;
  string c = "3/4";

  a = a + b;
  a = a.operator-(b);

  cout << a;
  cin >> a >> b;

  return 0;
}