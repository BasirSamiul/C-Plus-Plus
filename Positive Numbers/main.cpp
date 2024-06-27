//URI Online Judge Problem 1060

#include <iostream>

using namespace std;

int main()
{
    double num, positive = 0;

    for (int i = 0; i < 6; i++){

        cin >> num;

         if(num != 0){
            if(num > 0){
               positive += 1;
            }
        }
    }
    cout << positive << " valores positivos" << endl;

    return 0;

}
