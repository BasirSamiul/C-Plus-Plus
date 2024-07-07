//URI Online Judge 1145

#include <iostream>

using namespace std;

int main()
{
    int x, y, counter = 0;

    cin >> x >> y;

    if (x > 1 && x < 20){

        if (y > x && y < 100000){

            for(int i = 1; i <= y; i++){
                counter++;
                if( counter == x){
                    cout << i << endl;
                    counter = 0;
                }
                else{
                    cout << i << " ";
                }

            }

        }

    }

    return 0;
}
