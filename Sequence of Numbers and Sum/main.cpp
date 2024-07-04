//URI Online judge 1101

#include <iostream>

using namespace std;

int main()
{
    int x, y, aux;

        int sum  = 0;

        cin >> x >> y;

        while( x  || y ){

            cin >> x >> y;

            if(x <= 0 || y <= 0){
                break;
            }

            if(x > 0 || y > 0){
                if(x>y){
                    aux = x;
                     x = y;
                     y = aux;
                }

                for(int i = x; i <= y; i++){
                        cout << i << " ";
                       sum += i;
                }
                cout << "Sum=" << sum << endl;
            }
}


    return 0;
}

