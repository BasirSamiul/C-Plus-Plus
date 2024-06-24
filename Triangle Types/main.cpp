// URI Online Judge 1045 Problem Solution

#include <iostream>

using namespace std;

void myFunc(double, double, double);

int main(){

    double a,b,c;

    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 00 ){

            myFunc(a,b,c);
    }

    return 0;

}

void myFunc(double a, double b, double c){

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         cout << "NAO FORMA TRIANGULO"<<endl;
        else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           cout << "TRIANGULO RETANGULO"<<endl;
        else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           cout << "TRIANGULO OBTUSANGULO"<<endl;
        else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           cout << "TRIANGULO ACUTANGULO"<<endl;
        if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO"<<endl;
        if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES"<<endl;
}


jjj
