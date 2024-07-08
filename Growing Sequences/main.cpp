//URI Online Judge Problem 1146

#include <iostream>

using namespace std;

int main()
{
    int num;


    cin >> num;

    while(num){
        if(num == 0){
            break;
        }
        else{
            for(int i = 1; i <= num; i++){
                cout << i;
                cout << ((i == num) ? "\n" : " ");
            }
        }
        cin >> num;

    }

    return 0;
}
