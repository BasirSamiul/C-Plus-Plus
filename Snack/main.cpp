//URI Online Judge Proglem No : 1038 Snack

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int code, quantity;

    double result;

    cin >> code >> quantity;

    switch(code){

        case 1: result = (4 * quantity);
                cout << fixed;
                cout << "Total: R$ " << setprecision(2) << result << endl;
                break;

        case 2: result = (4.5 * quantity);
                cout << fixed;
                cout << "Total: R$ " << setprecision(2) << result << endl;
                break;

        case 3: result = (5 * quantity);
                cout << fixed;
                cout << "Total: R$ " << setprecision(2) << result << endl;
                break;

        case 4: result = (2 * quantity);
                cout << fixed;
                cout << "Total: R$ " << setprecision(2) << result << endl;
                break;

        case 5: result = (1.5 * quantity);
                cout << fixed;
                cout << "Total: R$ " << setprecision(2) << result << endl;
                break;
    }

    return 0;
}
