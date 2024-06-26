//URI Online Judge Problem 1048

#include <iostream>
#include <iomanip>

using namespace std;

void adjustMent(double, double, int);

int main()
{
    double salary, calc;

    int percent;

    cin >> salary;

    if(salary >= 0 && salary <= 400.00){

        percent = 15;

        calc = ((salary * percent) / 100 );

        salary += calc;

        adjustMent(salary, calc, percent);

    }

    else if(salary >= 400.01 && salary <= 800.00){

        percent = 12;

        calc = ((salary * percent) / 100 );

        salary += calc;

        adjustMent(salary, calc, percent);

    }

    else if(salary >= 800.01 && salary <= 1200.00){

        percent = 10;

        calc = ((salary * percent) / 100 );

        salary += calc;

        adjustMent(salary, calc, percent);

    }
    else if(salary >= 1200.01 && salary <= 2000.00){

        percent = 7;

        calc = ((salary * percent) / 100 );

        salary += calc;

        adjustMent(salary, calc, percent);

    }
    else if(salary > 2000.00){

        percent = 4;


        calc = ((salary * percent) / 100 );

        salary += calc;

        adjustMent(salary, calc, percent);

    }

    return 0;
}

void adjustMent(double salary, double calc, int percent){

    cout << fixed;

    cout << "Novo salario: " << setprecision(2) << salary << endl;

    cout << "Reajuste ganho: " << setprecision(2) << calc << endl;

    cout << "Em percentual: " << percent << " %" << endl;

}
