//URI Online Judge Problem 1094

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int num, qty, C_count = 0, R_count = 0, S_count = 0;
    double  total = 0, avg_C = 0, avg_S = 0, avg_R = 0;

    string animal;

    cout << fixed;

    cin >> num;

    for ( int i = 1; i <= num; i++){

        cin >> qty >> animal;

        if (qty >= 1 && qty <= 15){

            total += qty;

            if(animal == "C"){
                C_count += qty;
            }

            if(animal == "S"){
                S_count += qty;
            }

            if(animal == "R"){
                R_count += qty;
            }
        }

    }

    avg_C = ((C_count / total) * 100);

    avg_S = ((S_count / total) * 100);

    avg_R = ((R_count / total) * 100);

    cout << "Total: "  << setprecision(0) << total << " cobaias" << endl;

    cout << "Total de coelhos: " << C_count << endl;

    cout << "Total de ratos: " << R_count << endl;

    cout << "Total de sapos: " << S_count << endl;

    cout << "Percentual de coelhos: " << setprecision(2) << avg_C << " %" << endl;

    cout << "Percentual de ratos: " << setprecision(2) << avg_R << " %" << endl;

    cout << "Percentual de sapos: " << setprecision(2) << avg_S << " %" << endl;


    return 0;
}
