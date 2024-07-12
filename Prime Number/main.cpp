//URI Online Judge Problem 1165

#include <iostream>

using namespace std;

int main()
{
    int testCase, num, temp, i = 1;

    cin >> testCase;

    if(testCase >= 1 && testCase <= 100){

        while(i <= testCase){

            cin >> num;

            if (num >= 1 && num <= 10000000){

                    temp = 0;

                    for (int j = 2; j <= num /2; j++){

                        if(num % j == 0){
                            temp++;
                            break;
                        }

                    }

                    if (temp == 0 && num != 1){
                        cout << num << " eh primo" << endl;
                    }
                    else{
                        cout << num << " nao eh primo" << endl;
                    }
                }

                i++;

            }

        }

    return 0;
}
