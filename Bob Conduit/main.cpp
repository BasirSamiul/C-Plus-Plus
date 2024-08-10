#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int num1, num2, i = 0;

    while(num && num <= 10000){
            if(i == num){
                break;
            }
            else{
                    cin >> num1 >> num2;
                    i++;
                    cout << num1 + num2 << endl;
            }

    }

    return 0;
}
