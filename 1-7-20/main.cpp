#include <iostream>

using namespace std;

void aFunction(int stuff)
{
  cout << "Received " << stuff << endl;
}

int main(void)
{
  cout << "Hello Tom!" << endl;
  
  for (int i = 0; i < 10; ++i)
  {
    cout << i << endl;
  }
  
  int input = 0;
  while (input != 10)
  {
    cout << "Enter a number: ";
    cin >> input;
  }

  aFunction(29);

  return 0;
}
