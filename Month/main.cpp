//URI Online Judge problem 1052

#include <iostream>

using namespace std;

int main()
{
    int month;

    cin >> month;


    if(month > 0 && month < 13){

        if (month == 1 ) cout << "January" << endl;
        else if (month == 2 ) cout << "February" << endl;
        else if (month == 3 ) cout << "March" << endl;
        else if (month == 4 ) cout << "April" << endl;
        else if (month == 5 ) cout << "May" << endl;
        else if (month == 6 ) cout << "June" << endl;
        else if (month == 7 ) cout << "July" << endl;
        else if (month == 8 ) cout << "August" << endl;
        else if (month == 9 ) cout << "September" << endl;
        else if (month == 10 ) cout << "October" << endl;
        else if (month == 11 ) cout << "November" << endl;
        else if (month == 12 ) cout << "December" << endl;

    }

    return 0;
}
