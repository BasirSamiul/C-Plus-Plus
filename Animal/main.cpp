//URI Online Judge Problem 1049

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <functional>

using namespace std;

void animalTable(string, string, string);

int main()
{
    cout << flush;

    string name_1, name_2, name_3;
//FOR FIRST NAME
    getline(cin, name_1);

    transform(name_1.begin(), name_1.end(), name_1.begin(), ptr_fun<int, int> (tolower));

//FOR SECOND NAME
    getline(cin, name_2);

    transform(name_2.begin(), name_2.end(), name_2.begin(), ptr_fun<int, int> (tolower));

//FOR THIRD NAME
    getline(cin, name_3);

    transform(name_3.begin(), name_3.end(), name_3.begin(), ptr_fun<int, int> (tolower));

    animalTable(name_1, name_2, name_3);

    return 0;
}

void animalTable(string animal_one, string animal_two, string animal_three){

    if(animal_one == "vertebrado"){
        if(animal_two == "ave"){
            if(animal_three == "carnivoro"){
                cout << "aguia" << endl;
            }
            else if(animal_three == "onivoro"){
                cout << "pomba" << endl;
            }
        }
        else if(animal_two == "mamifero"){
            if(animal_three == "onivoro"){
                cout << "homem" << endl;
            }
            else if(animal_three == "herbivoro"){
                cout << "vaca" << endl;
            }
        }

    }
    if(animal_one == "invertebrado"){
        if(animal_two == "inseto"){
            if(animal_three == "hematofago"){
                cout << "pulga" << endl;
            }
            else if(animal_three == "herbivoro"){
                cout << "lagarta" << endl;
            }
        }
        else if(animal_two == "anelideo"){
            if(animal_three == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else if(animal_three == "onivoro"){
                cout << "minhoca" << endl;
            }
        }

    }
}

