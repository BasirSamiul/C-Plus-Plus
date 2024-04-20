/*

Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1)
and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:

*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double x1, x2, y1, y2, p1, p2, result, distance;

    cin >> x1 >> y1;

    cout << endl;

    cin >> x2 >> y2;

    p1 = (x2 - x1);

    p2 = (y2 - y1);

    result = ((p1 * p1) + (p2 * p2));

    distance = sqrt(result);

    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}
