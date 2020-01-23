#include <iostream>
#include <string>

using namespace std;


class Clock
{
  public:
    Clock() 
      : hours(0), 
        minutes(0),
        seconds(0)
    {
      // empty
    }

    Clock(int hours, int minutes, int seconds)
      : hours(hours),
        minutes(minutes),
        seconds(seconds)
    {
      // empty
    }

    string getTime()
    {
      return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
    }

    void setTime(int hours, int minutes, int seconds);
    void setTime(string time);

    Clock operator + (Clock toBeAdded)
    {

    }

    Clock operator += (Clock toBeAdded)
    {

    }

    void operator = (Clock toBeAssigned)
    {
      cout << "Clock operator =" << endl;
    }

  private:
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
};

ostream& operator << (ostream& out, Clock toBePrinted)
{
  out << toBePrinted.getTime();

  return out;
}

void add (int& b)
{
  cout << "&b: " << &b << endl;
  b += 5;
}

int main()
{
  cout << "hello initialization lists" << endl;
  int a = 9;
  Clock myClock(0, 7, 2);
  Clock aClock(0, 7, 2);
  Clock bClock(0, 7, 2);

  int b = 8;
  cout << "&a: " << &a << endl;
  cout << "a: " << a << endl;
  add(a);
  cout << "a: " << a << endl;
  cout << "&a: " << &a << endl;

  Clock answer = myClock + aClock + bClock;

  myClock += aClock;

  cout << "The time is now: " << myClock << endl;

  return 0;
}

