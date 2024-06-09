#include <iostream>

int main()
{
    int num = 5;
    bool flag = false;
    std :: cout << "flag = " << flag << std :: endl;

    flag = true;
    std :: cout << "flag = " << flag << std :: endl;

    std :: cout << "--------------------------" << std :: endl;

    enum Coin { PEENY = 1, NICKEL = 5, DIME = 10, QUARTER = 25};

    //enum name {samiul = "sami"};

    if (num == NICKEL){
        std :: cout << "Hey, I am working in this system!!!!" << std :: endl;
    }

    /*
    if ("sami" == samiul){
        std :: cout << "Thanks!!!" << std :: endl;
    }
    */

    std :: cout << "--------------------------" << std :: endl;

    return 0;
}
