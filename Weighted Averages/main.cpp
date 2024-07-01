//URI Online Judge Problem

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;

    double x, y, z, avg = 0;

    cout << fixed;

    cin >> num;

    for (int i = 0; i < num; i++){

            cin >> x >> y >> z;

            avg = (((x * 2) + (y * 3) + (z * 5)) / 10);

            cout << setprecision(1) << avg << endl;

    }

    return 0;
}
