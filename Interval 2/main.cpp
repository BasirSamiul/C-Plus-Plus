
// URI Online Judge Problem 1072
#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if(num > 5 && num < 2000){

        for(int i = 1; i <= num; i++ ){

            if(i % 2 == 0){

                cout << i << "^2 = " << i * i << endl;
            }
        }
    }

    return 0;
}
