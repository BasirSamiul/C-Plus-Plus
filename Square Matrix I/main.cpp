/*
#include <iostream>

using namespace std;

int main()
{

    int num;

    cin >> num;

    if (num >= 0 && num <= 100){

        while(num > 0){

            int my_arr [num][num];

            for(int i = 0; i < num; i++){

                for(int j = 0; j < num; j++){

                    cin >> my_arr[i][j];

                }
            }
            for (int i = 0; i < num; i++){
                    for (int j = 0; j < num; j++){
                        cout << my_arr[i][j] << " ";
                    }

                    cout << endl;
            }

            cout << endl;

            cin >> num;

        }


    }

    return 0;
}
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, mid, i, j, bot, m[100][100];


    while(cin >> n && n != 0){

        mid = ( n%2 == 0 ? n/2 : (n/2)+1);

        for(i = 0; i < mid; i++) {
            bot = (n-1)-i;

            for(j = i; j <= bot; j++){
                m[i][j] = i+1;
                m[bot][j] = i+1;
                m[j][i] = i+1;
                m[j][bot] = i+1;
            }

        }

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++)
                if(j == 0)
                    cout << setw(3) << m[i][j];
                else
                    cout << " " << setw(3) << m[i][j];

            cout << endl;
        }

        cout << endl;
    }

    return 0;

}
