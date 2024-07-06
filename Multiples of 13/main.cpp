//URI Online Judge Problem 1132

#include <iostream>

using namespace std;

int main()
{
    int x, y, sum = 0;

    cin >> x >> y;

    if (x>y){
        for (int i = y; i <= x; i++){
            if (i % 13 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }

    else if (x<y){
        for (int i = x; i <= y; i++){
            if (i % 13 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }

    else{
        cout << sum << endl;
    }

    return 0;
}
