// URI Online Judge Problem 1075

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for(int i = 1; i < 10000; i++){
        if (i % num == 2){
            cout << i << endl;
        }
    }

    return 0;
}
