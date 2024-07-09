//URI Online Judge Problem 1153

#include <iostream>

using namespace std;

int main()
{
    int num, factorial = 1;

    cin >> num;

    if (num > 0 && num < 13){

        for (int i = 1; i <= num; ++i){

           factorial *= i;

        }
        cout << factorial << endl;

    }

    return 0;
}
