//URI Online Judge Problem 1134

#include <iostream>

using namespace std;

int main()
{
    int code, alcool = 0, gasolina = 0, diesel = 0;

    cin >> code;

    int a_counter = 0, g_counter = 0, d_counter = 0;

    while(code){


            if( code == 1){
                a_counter++;
            }

            else if( code == 2){
                g_counter++;

            }

            else if( code == 3){
                d_counter++;

            }


            if(code == 4){
                break;
            }

        cin >> code;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a_counter << endl;
    cout << "Gasolina: " << g_counter << endl;
    cout << "Diesel: " << d_counter << endl;

    return 0;
}
