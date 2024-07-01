//URI Online Judge Problem 1074

#include <iostream>

using namespace std;

int main()
{
    int input, num;

    cin >> input;

    for (int i = 1; i <= input; i++) {

        cin >> num;

        if(num > 0 && num % 2 == 0){
            cout << "EVEN POSITIVE" << endl;
        }


        if(num > 0 && num % 2 != 0){
            cout << "ODD POSITIVE" << endl;
        }


         if(num < 0 && num % 2 == 0){
            cout << "EVEN NEGATIVE" << endl;
        }


        if(num < 0 && num % 2 != 0){
            cout << "ODD NEGATIVE" << endl;
        }

        if(num == 0){
            cout << "NULL" << endl;
        }

    }

    return 0;
}
