// Calculating fibonacci series.
#include <iostream>

using namespace std;

int main()
{
    long bound;
    cout << "Enter a positive integer: " << endl;
    cin >> bound;

    cout << "Fibonacci numbers < " << bound << ":\n0, 1";
    long f_0 = 0, f_1 = 1;
    while(true){
            long f_2 = f_0 + f_1;
            if (f_2 > bound){
                exit(0);
            }
            cout << ", " << f_2;
            f_0 = f_1;
            f_1 = f_2;
    }
    return 0;
}
