/*

Read an integer value, which is the duration in seconds of a certain event in a factory,
and inform it expressed in hours:minutes:seconds.

*/
#include <iostream>

using namespace std;

int main()
{
  int seconds;

  cin >> seconds;

  //we divide the seconds but it return integer value not fraction.
  int hours = seconds / 3600;
  //so in here the value of again multiply by integer value
  seconds = seconds - (hours * 3600);

  int minutes = seconds / 60;

  seconds = seconds - (minutes * 60);

  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}
