/*

Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364.
This is just an exercise for the purpose of testing simple mathematical reasoning.

*/

#include <iostream>

using namespace std;

int main()
{
    int days;

    //taking input the days
    cin >> days;

    //calculating the years
    int year = days / 365;
    days = days - (year * 365);

    //calculating the months
    int month = days / 30;

    //calculating the finally days
    days = days - (month * 30);

    cout << year << " ano(s)" << "\n";
    cout << month << " mes(es)" << "\n";
    cout << days << " dia(s)" << endl;

    return 0;
}
