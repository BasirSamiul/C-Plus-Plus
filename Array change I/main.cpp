//URI Online Judge 1174

#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{

    int arr[20];

   // cout << fixed;

    int num, j = 0;

    for (int i = 0; i < 20; i++){

        cin >> num;

        arr[i] = num;

    }

    for (int i = 19; i >= 0; i--){

        cout << "N" << "[" << j << "] = " << arr[i] << endl;

        j++;

    }

    return 0;
}
