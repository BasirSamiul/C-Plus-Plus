//URI Online Judge Problem 1064

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num, avg = 0, positive = 0;

    cout << fixed;

    for (int i = 0; i < 6; i++){

        cin >> num;

         if(num != 0){
            if(num > 0){
               positive += 1;
               avg += num;
            }
        }
    }
    double result = avg / positive;

    cout << setprecision(0) << positive << " valores positivos" << endl
         << setprecision(1) << result << endl;

    return 0;

}
