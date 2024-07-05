//URI Online Judge Problem 1116

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int testcase, i = 0;

    double x, y, result;

    cout << fixed;

    cin >> testcase;

    while(i < testcase){

        cin >> x >> y;

        if(y == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            result = x / y;
            cout << setprecision(1) << result << endl;
        }

        i++;
    }

    return 0;
}
