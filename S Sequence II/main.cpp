//URI Online Judge Problem 1156

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double result = 2, sum = 1;

    cout << fixed;

    for(double i = 3; i <= 39; i += 2){

        sum += i / result;

        result *=2;

    }
    cout << setprecision(2) << sum << endl;

    return 0;
}
