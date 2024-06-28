//URI Online Judge Problem 1065

#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{
    int num, positive = 0;

   // cout << fixed;

    for (int i = 0; i < 5; i++){

        cin >> num;

         if(num % 2 == 0){
            //if(num > 0){
               positive += 1;
               //avg += num;
            //}
        }
    }
   // double result = avg / positive;

    //cout << setprecision(0) << positive << " valores positivos" << endl
        // << setprecision(1) << result << endl;

    cout << positive << " valores pares" << endl;

    return 0;

}
