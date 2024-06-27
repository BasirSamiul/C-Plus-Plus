//URI Online Judge Problem 1051

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salary;


    cin >> salary;

    cout << fixed;

    if(salary <= 2000){
        cout << "Isento" <<endl;
    }
    else if(salary >= 2000.01 && salary <= 3000.00){
        salary = ((salary - 2000.00) * 0.08);
        cout << "R$ " << setprecision(2) << salary << endl;
    }
    else if(salary >= 3000.01 && salary <= 4500.00){
        salary = (((salary - 3000.00) * 0.18) + (1000.00 * 0.08));
        cout << "R$ " << setprecision(2) << salary << endl;
    }
    else if(salary >= 4500.01){
        salary = (((salary - 4500.00) * 0.28) + (1500.00 * 0.18) + (1000.00 * 0.08));
        cout << "R$ " << setprecision(2) << salary << endl;
    }

    return 0;
}
