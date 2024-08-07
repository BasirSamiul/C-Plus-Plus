#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
   double M[12][12];

   string letter;

   double num, sum = 0, avg = 0, counter = 0;

   cin >> letter;

   cout << fixed;

   if("S" == letter){

        for(int i = 0; i <= 11; i++){

            for(int j = 0; j <= 11; j++){

                cin >> num;

                M[i][j] = num;

                if(j > i){

                     sum += M[i][j];
                }

            }
        }

        cout << setprecision(1) << sum << endl;

   }

   if("M" == letter){

        for(int i = 0; i <= 11; i++){

            for(int j = 0; j <= 11; j++){

                cin >> num;

                M[i][j] = num;

                if(j > i){
                     counter++;
                     sum += M[i][j];
                }
            }
        }

        avg = sum / counter;

        cout << setprecision(1) << avg << endl;

   }

}
