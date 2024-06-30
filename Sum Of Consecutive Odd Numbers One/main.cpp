//URI Online Judge 1071

#include <iostream>

using namespace std;

void calculator (int, int);

int main()
{
    int x, y, sum_x = 0, sum_y = 0;

    cin >> x >> y;

    if(x < y){
        calculator(x,y);
    }
    else{
        calculator(y,x);
    }

    return 0;
}

void calculator (int x, int y){

    int sum = 0;

    for(int i = x + 1; i < y; ++i){

        if(i % 2 != 0){
            sum += i;
        }
    }

    cout << sum << endl;
}
