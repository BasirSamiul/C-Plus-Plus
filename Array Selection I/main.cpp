//URI Online Judge 1174

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double arr[100];

    cout << fixed;

    double num;

    for (int i = 0; i < 100; i++){

        cin >> num;

        arr[i] = num;

    }

    for (int i = 0; i < 100; i++){

        if(arr[i] <= 10){

            cout << "A" << "[" << i << "] = " << setprecision(1) << arr[i] << endl;

        }

    }

    return 0;
}
