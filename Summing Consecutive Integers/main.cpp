//URI Online Judge Problem 1149

#include <iostream>

using namespace std;

int main()
{
    int algo, num, sum = 0;

    cin >> algo >> num;

    while(num <= 0){
        cin >> num;
    }

    for (int i = 1; i <= num; i++){
            sum += algo;
            ++algo;
        }
    cout << sum << endl;

    return 0;
}
