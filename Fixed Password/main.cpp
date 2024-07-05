//URI Online Judge Problem 1114

#include <iostream>

using namespace std;

int main()
{

    int password;

    cin >> password;

    while(password){

        if (password == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }

        else{
            cout << "Senha Invalida" << endl;
        }

        cin >> password;
    }

    return 0;
}
