/*
The input file contains two values: one integer value X representing the total distance (in Km)
and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int distance;

    float fuel;

    cin >> distance >> fuel;

    cout << fixed <<  setprecision(3) << distance / fuel << " km/l" << endl;

    return 0;
}
