//URI Online Judge Problem 1040

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double num_one, num_two, num_three, num_four;

    double num_1, num_2, num_3, num_4, sum = 0, avg, result, exam_score;

    //cin >> fixed >> setprecision(1);

    cin >> num_one >> num_two >> num_three >> num_four;

    num_1 = num_one * 2;

    num_2 = num_two * 3;

    num_3 = num_three * 4;

    num_4 = num_four * 1;

    sum = num_1 + num_2 + num_3 + num_4;

    result = (sum / 10);

    cout << fixed;

    if(result >= 7.0 ){

            cout << setprecision(1) << "Media: " << result << endl;

            cout << "Aluno aprovado." << endl;
    }
    if(result < 5.0){

        cout << setprecision(1) << "Media: " << result << endl;

        cout << "Aluno reprovado." << endl;
    }
    if(result >= 5.0 && result <= 6.9){
            cin >> exam_score;

            double res = result + exam_score;

            avg = (res / 2);

            cout << setprecision(1) << "Media: " << result << endl;

            cout << "Aluno em exame." << endl;

            cout << "Nota do exame: " << setprecision(1) << exam_score << endl;

            if(avg >= 5.0){
                cout << "Aluno aprovado." << endl;
            }
            if (avg <= 4.9){
                cout << "Aluno reprovado." << endl;
            }

            cout <<  "Media final: " << setprecision(1) << avg << endl;

    }

    return 0;
}
