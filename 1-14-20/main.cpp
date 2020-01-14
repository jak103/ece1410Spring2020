#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Bob
{
  public:
    Bob()
    {
      number = 1;
    }

    int getNumber()
    {
      return number;
    }

    void setNumber(int value)
    {
      if (value < 0)
      {
        value = 0;
      }

      number = value;
    }

  protected:

  private:
    int number;
};


int main()
{ 
  Bob junk;
  //junk.setNumber(-9);

  cout << "junk.number: " << junk.getNumber() << endl;



  fstream fout ("out.txt", std::fstream::app);
  fstream fin ("out.txt", std::fstream::in);

  stringstream stuff("5 3 6 8 1");

  int number;

  cout << "'a' + 9: " << 'a' + 9 << endl;
 
  cout << "Hello finally" << endl;
  fout << "Hello file more " << 9 + 'a' << ' '  << 3.14 << endl;
  
  stuff >> number;
  cout << "number: " << number << endl;


  return 0;
}