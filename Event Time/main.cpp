//URI Online Judge Problem 1061

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Initialize the variable for taking input!
    string temp;
    int start_day, start_hour, start_min, start_seconds, finish_day, finish_hour, finish_min, finish_seconds;

    //Taking input for start day with time format.
    cin >> temp >> start_day;
    cin >> start_hour >> temp >> start_min >> temp >> start_seconds;

    //Taking input for final day with time format.
    cin >> temp >> finish_day;
    cin >> finish_hour >> temp >> finish_min >> temp >> finish_seconds;

    //calculation
    int day = finish_day - start_day;
    int h = finish_hour - start_hour;
    int m = finish_min - start_min;
    int s = finish_seconds - start_seconds;

    if(s < 0){
        s += 60;
        m--;
    }
    if(m < 0){
        m += 60;
        h--;
    }
    if(h < 0){
        h += 24;
        day--;
    }
    cout << day << " dia(s)" << endl
         << h << " hora(s)" << endl
         << m << " minuto(s)" << endl
         << s << " segundo(s)" << endl;


    return 0;
}
