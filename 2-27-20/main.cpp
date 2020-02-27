#include <iostream>


using namespace std;



int main()
{
  cout << "Hello memory!" << endl;

  int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int temp = 999;
  for (int i = 0; i < 10; ++i)
  {
    cout << "array[" << i << "]: " << array[i] << endl;
  }

  array[11] = 0; // DONT DO THIS!!!

  cout << "temp: " << temp << endl;

  cout << "array: " << array << endl;
  cout << "*array: " << *(array + 1) << endl;

  int* num = new int;
  *num = 42;
  int* ptr = new int; // DONT DO THIS!!!
  for (int i = 0; i < 10; ++i) // DONT DO THIS!!!
  {
    *(ptr + i) = i;
    cout << "*(ptr + " << i << "): " << ptr[i] << endl;
  }


  int* middle = ptr + 4;

  cout << "middle: " << middle << endl;

  cout << "ptr + 4: " << ptr + 4 << endl;

  cout << "middle[-1]: " << middle[-1] << endl;

  cout << "Middle: " << middle[0] << endl;


  return 0;
}