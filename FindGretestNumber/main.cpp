//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
#include <iostream>
#include <math.h>

using namespace std;

class FindGreatest{

    public:

    int num_one, num_two, num_three, maiorAB, max_num;

    FindGreatest(int first, int second, int three){
        num_one = first;
        num_two = second;
        num_three = three;
        maiorAB = (num_one + num_two + abs(num_one - num_two))/2;
        max_num = (maiorAB + num_three + abs(maiorAB - num_three))/2;
        cout << max_num << " eh o maior" <<endl;
    }


};

int main()
{
    int first, second, third;

    cin >> first >> second >> third;

    FindGreatest major(first, second, third);

    return 0;
}
