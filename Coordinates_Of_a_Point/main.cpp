//URI Online Judge Problem 1041

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double x,y;

    cin >> x >> y;

    cout << fixed;

    if(x > 0 && y > 0){
        cout << "Q1" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "Q2" << endl;
    }
    else if(x < 0 && y < 0){
        cout << "Q3" << endl;
    }

    else if(x > 0 && y < 0){
        cout << "Q4" << endl;
    }
    else if(x == 0.0 && y == 0.0){
        cout << "Origem" << endl;
    }
    else if( x == 0.0 && (y >= 0.0 || y <= 0.0 )){
         cout << "Eixo Y" << endl;
    }
    else if( y == 0.0 && (x >= 0.0 || x <= 0.0 )){
         cout << "Eixo X" << endl;
    }

    return 0;
}
