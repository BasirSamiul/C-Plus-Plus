//URI Online Judge Problem 1164

#include <iostream>

using namespace std;

int main()
{
    int testCase, num, sum, i = 1;

    cin >> testCase;

    if(testCase >= 1 && testCase <= 100){

        while(i <= testCase){

            cin >> num;

            if (num >= 1 && num <= 100000000){

                sum = 0;

                for (int j = 1; j < num; j++){

                    if(num % j == 0){
                        sum += j;
                    }

                }

                if( sum == num ){
                    cout << num << " eh perfeito" << endl;
                }
                else{
                    cout << num << " nao eh perfeito" << endl;
                }

            }

            i++;
        }
    }

    return 0;
}
