//URI Online Judge Problem 1154

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age;

    double avg = 0, counter = 0, sum = 0;

    cin >> age;

    cout << fixed;

    while(age){

        if (age < 0){
            break;
        }
        else{
            sum += age;
            counter++;
        }

        cin >> age;

    }

     avg = sum / counter;
     cout << setprecision(2) << avg << endl;

    return 0;
}
