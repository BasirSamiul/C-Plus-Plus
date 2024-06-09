#include <iostream>

using namespace std;

int main()
{
    float f = 3.5;

    //implicit type case
    // float to int
    int a = f;
    cout <<"The value of a: " << a << endl;

    //using static_cast for float to int
    int b = static_cast<int>(f);
    cout << "\nThe value of b: " << b << endl;

    return 0;
}
