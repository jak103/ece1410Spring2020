#include <iostream>
#include <sstream>

using namespace std;

class Number
{
  public:
    Number(int value)
    {
      cout << "Number ctor" << endl;
      this->value = value;
    }
    
    int value;
};

// Three types of operators
// Unary
// Binary
// Ternary

int operator + (Number a, Number b)
{
  cout << "operator +" << endl;
  return a.value + b.value;
}

ostream& operator << (ostream& out, Number a)
{
  out << a.value;
  return out;
}

istream& operator >> (istream& in, Number a)
{
  in >> a.value;
  return in;
}




int main(int argc, char** argv)
{
  stringstream out;
  out << argv[0];
  Number z(9);
  Number y(5);
  Number x(y + z);

  //cin >> x;
  cout << "x: " << x << endl;
  cout << out.str();


  return 0;
}