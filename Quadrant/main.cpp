//URI Online Judge Problem 1115

#include <iostream>

using namespace std;

int main()
{

    int x, y;

    cin >> x >> y;

    while(x || y){


        if(x == 0 || y == 0 ){
            break;
        }
        else if(x > 0 && y > 0){
            cout << "primeiro" << endl;
        }
        else if(x > 0 && y < 0){
            cout << "quarto" << endl;
        }
        else if(x < 0 && y > 0){
            cout << "segundo" << endl;
        }
        else if(x < 0 && y < 0){
            cout << "terceiro" << endl;
        }

        cin >> x >> y;

    }

    return 0;
}
