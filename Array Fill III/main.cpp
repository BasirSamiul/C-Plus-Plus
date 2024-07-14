//URI Online Judge Problem 1178

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num, temp = 0;

    double arr[100];

    cin >> num;

    cout << fixed;

    for(int i = 0; i < 100; i++){

        temp = num;

        arr[i] = temp;

        num = temp / 2;

    }
    for (int i = 0; i < 100; i++){
        cout << "N[" << i << "] = " << setprecision(4) << arr[i] << endl;
    }

    return 0;
}
