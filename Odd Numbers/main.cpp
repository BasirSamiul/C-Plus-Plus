//URI Online Judge Problem 1067

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num >= 1 && num <= 1000){

        for(int i = 1; i <= num; i++){
           if(i % 2 != 0){
                cout << i << endl;
           }
        }


    }

    return 0;
}
