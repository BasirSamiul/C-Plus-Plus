//URI Online Judge Problem 1047 solution

#include <iostream>

using namespace std;

void timeConvert(int);

int main()
{

    int initial_hour, initial_minute, final_hour, final_minute, start, finish, detect = 0, zero = 0, fulltime = 24;

    cin >> initial_hour >> initial_minute >> final_hour >> final_minute;

    start = (initial_hour * 60) + initial_minute;

    finish = (final_hour * 60) + final_minute;

    if(initial_hour <= final_hour){

        detect = finish - start;

        if (detect == 0){
                cout << "O JOGO DUROU " << fulltime << " HORA(S) E " << zero << " MINUTO(S)" << endl;
        }
        else{
            timeConvert(detect);
        }

    }
    else{
        detect = ((24 * 60)
         - start) + finish;
        timeConvert(detect);

    }
/*
    if (detect < 60 && detect >= 1){

        cout << "O JOGO DUROU " << zero << " HORA(S) E " << detect << " MINUTO(S)" << endl;
    }
    if(detect >= 60 && detect <= 1440){
        timeConvert(detect);
    }
*/
    return 0;
}

void timeConvert(int minute){

    //we divide the seconds but it return integer value not fraction.
    int hours = minute / 60;

    //so in here the value of again multiply by integer value
    minute = minute - (hours * 60);

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minute << " MINUTO(S)" << endl;
}
