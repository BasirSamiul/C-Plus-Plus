//URI Online judge 1113

#include <iostream>

using namespace std;

int main()
{
    int x, y;

        cin >> x >> y;

        while( x  || y ){

        if(x > y){
                    cout << "Decrescente" << endl;
                }

        if(y > x){
                    cout << "Crescente"  << endl;
                }
                if(x == y){
                break;
            }
            cin >> x >> y;


}


    return 0;
}

