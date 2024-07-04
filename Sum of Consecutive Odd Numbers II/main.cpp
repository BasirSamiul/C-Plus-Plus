//URI Online judge 1099

#include <iostream>

using namespace std;

int main()
{
    int num, x, y;

    cin >> num;

    for (int i =0; i < num; i++){

        int sum  = 0;

        cin >> x >> y;

        if (x > y){
            for (int j = y; j < x; j++){
                if(j != y){
                    if(j % 2 != 0){
                        sum += j;
                    }
                }
            }
            cout << sum << endl;
        }
        else if(y > x){

            for (int j = x; j < y; j++){
                if(j != x){
                    if(j % 2 != 0){
                        sum += j;
                    }
                }
            }
            cout << sum << endl;
        }
        else{
            cout << sum << endl;
        }
    }

    return 0;
}
