//URI Online Judge 1173

#include <iostream>

using namespace std;

int main()
{

    int arr[10];

    int num;

    cin >> num;

    //arr[0] = num;

    //int temp = arr[0];

    for (int i = 0; i < 10; i++){

        arr[i] = num;

        cout << "N" << "[" << i << "] = " << arr[i] << endl;

        num *= 2;

    }
    /*

    for (int i = 0; i < 10; i++){

        if(arr[i] == 0 || arr[i] < 0){

            arr[i] = 1;

        }



    }
    */

    return 0;
}
