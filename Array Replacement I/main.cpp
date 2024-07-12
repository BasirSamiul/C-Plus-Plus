//URI Online Judge 1172

#include <iostream>

using namespace std;

int main()
{

    int arr[10];

    int num;

    for (int i = 0; i < 10; i++){

        cin >> num;

        arr[i] = num;

    }

    for (int i = 0; i < 10; i++){

        if(arr[i] == 0 || arr[i] < 0){

            arr[i] = 1;

        }

        cout << "X" << "[" << i << "] = " << arr[i] << endl;

    }

    return 0;
}
