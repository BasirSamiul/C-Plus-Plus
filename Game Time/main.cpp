//URI Online Judge Problem 1046 Solution

#include <iostream>

using namespace std;

int main()
{
    int start_time, end_time, result;

    cin >> start_time >> end_time;

    if(start_time > end_time){

        result = 24 - start_time;

        result += end_time;

        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;


    }
    if(start_time < end_time){

        result = end_time - start_time;

        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;

    }
    if (start_time == end_time){

        result = 24;

        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;


    }

    return 0;
}
