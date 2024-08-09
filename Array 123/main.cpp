//Uri Online Judge Problem no 1534

/*
#include <iostream>

using namespace std;

int main(){

    int num;

    while (cin >> num ){
        if (num == EOF){
            break;
        }

         int my_arr[num][num];

         int temp = num - 1;

         for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                if (j == temp){
                    my_arr[i][j] = 2;
                }
                else if(i == j){
                    my_arr[i][j] = 1;
                }
                else{
                    my_arr[i][j] = 3;
                }
                temp--;
            }
         }

         for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                cout << my_arr[i][j];
            }
            cout << endl;
         }

    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        bool x=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(n-1-j==i){
                    cout<<2;
                    continue;
                    }
                if(i==j){
                        cout<<1;
                    }
                    else{
                        cout<<3;
                        continue;
                    }
            }
            cout<<endl;
        }
    }
        return 0;
}
