/*

Read 3 floating-point numbers.
After, print the roots of bhaskara’s formula.
If it's impossible to calculate the roots because a division by zero or a square root of a negative number,
presents the message “Impossivel calcular”.

*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    try{
        //initialize the value
        double num_one, num_two, num_third;

        //taking input from console
        cin >> num_one >> num_two >> num_third;

        //creating the variable which is store final result
        double R1, R2;

        //calculate the value, which is responding the Bhaskar formula
        double result = ((num_two * num_two) - (4 * num_one * num_third));

        //multiply the third number by the rules of Bhaskar formula
        double divisor = 2 * num_one;

        //Finally, calculate square root of number
        double sqrt_result = sqrt(result);

        //checking the condition
        if (result < 0 || num_one == 0){
                throw "Error";
        }
        //if not satisfy execute the final command
        else{

            R1 = ((-num_two + sqrt_result) / divisor);
            R2 = ((-num_two - sqrt_result) / divisor);
            cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
            cout << fixed << setprecision(5) << "R2 = " << R2 << endl;
        }
        //start the catch block
   }catch(...){
       cout << "Impossivel calcular" << endl;
   }



    return 0;
}
