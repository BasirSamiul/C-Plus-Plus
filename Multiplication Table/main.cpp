// URI Online Judge Problem 1078

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << i << " x " << num << " = " << i * num << endl;
    }

    return 0;
}
