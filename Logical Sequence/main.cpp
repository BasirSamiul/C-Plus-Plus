//URI Online Judge Problem 1144

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num > 1 && num < 1000){

        int j = 1;

        for (int i = 1; i <= num; i++){
            cout << i << " " << i * i << " " << i * i * i << endl;
            cout << i << " " << (i * i) + j << " " << (i * i * i) + j << endl;
        }
    }

    return 0;
}
