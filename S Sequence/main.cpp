//URI Online Judge Problem 1155

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double s = 1, result = 0, sum = 0;

    cout << fixed;

    for(double i = 1; i <= 100; i++){
        result  = s / i;
        sum += result;

    }
    cout << setprecision(2) << sum << endl;

    return 0;
}
