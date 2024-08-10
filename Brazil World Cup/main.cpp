#include <iostream>

using namespace std;

int main()
{
    int num;

    while((cin >> num) && num >= 0 && num <= 100 && num != EOF){

                if(num == 0){
                    cout << "vai ter copa!" << endl;
                }
                else{
                    cout << "vai ter duas!" << endl;
                }
    }

    return 0;
}
