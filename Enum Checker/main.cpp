#include <iostream>

int main()
{
    enum class Color {red, green = 20, blue};
    Color r = Color :: blue;

    switch(r){

        case Color :: red : std :: cout << "red\n"; break;
        case Color :: green : std :: cout << "green\n"; break;
        case Color :: blue : std :: cout << "blue\n"; break;
    }

    /*
    ------------------------------------------
    Hey, young man here is rules and instruction with specific syntax in static_cast:
    syntax => <dest type> (source)
    ------------------------------------------
    */

    //int n = r; error : no implicit conversion from scoped enum to int
    int n = static_cast<int> (r); //ok, n = 21;
    std :: cout << n << std :: endl;

    return 0;
}
