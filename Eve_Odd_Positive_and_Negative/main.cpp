//URI Online Judge Problem 1066

#include <iostream>

//#include <iomanip>

using namespace std;

int main()
{
    int num, positive = 0, negative = 0, even = 0, odd = 0;

    for (int i = 0; i < 5; i++){

        cin >> num;

         if(num % 2 == 0){

               even += 1;
        }
        if(num % 2 != 0){

               odd += 1;
        }
        if(num > 0){

               positive += 1;
        }
        if(num < 0){

               negative += 1;
        }
    }

    cout << even << " valor(es) par(es)" << endl
         << odd <<" valor(es) impar(es)" << endl
         << positive << " valor(es) positivo(s)" << endl
         << negative << " valor(es) negativo(s)" << endl;


    return 0;

}
