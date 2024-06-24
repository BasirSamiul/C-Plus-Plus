//URI Online Judge Problem 1043

/*
-----------------------------------------------------------------
The Formula for if three point's make a triangle or not?
Formulas:
Let, these three points are: A, B and C
So,
1) A + B > C
2) B + C > A
3) C + A > B

If above these three condition's satisfied then make it a triangles.
-----------------------------------------------------------------
*/

/*
-----------------------------------------------------------------
The formula for 2D Shape Trapezoid Area.
Let, Three points are A,B, and C
So, Area = ((A +B) / 2) * C
-----------------------------------------------------------------
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, area, perimeter;

    cin >> a >> b >> c;

    cout << fixed;

    perimeter = a + b + c;

    if(((a + b) > c) && ((b + c) > a) && ((c + a) > b)){
        cout << "Perimetro = " << setprecision(1) << perimeter << endl;
    }
    /*
    else if((b + c) > a){
        cout << "Perimetro = " << setprecision(1) << perimeter << endl;
    }
    else if((c + a) > b){
        cout << "Perimetro = " << setprecision(1) << perimeter << endl;
    }
    */
    else{
        area = ((a + b) / 2) * c;
        cout << "Area = " << setprecision(1) << area << endl;
    }

    return 0;
}
