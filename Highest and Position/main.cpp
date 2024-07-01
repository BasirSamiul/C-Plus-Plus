//URI Online Judge Problem 1080

#include <iostream>

using namespace std;

int main()
{
    int num, temp = 0, i, pos = 0;

    for (i = 1; i <= 15; ++i){

        cin >> num;

        if (num > temp){
            temp = num;
            pos = i;
        }
    }

    cout << temp << endl << pos << endl;

    return 0;
}
