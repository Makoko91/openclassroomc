#include <iostream>
#include <ctime> // Obligatoire
#include <cstdlib> // Obligatoire
#include <string>
using namespace std;


void saisiemot()
{
    string mot;
    cout << "choissisez un mot"<<endl;
    cin >> mot;
    srand(time(0));
    int position = rand()%mot.size();
    cout << position+1 <<endl;
    cout << "Lettre au hasard :" << mot[position];

}


int main()
{    
    //1 : On demande de saisir un mot
    saisiemot();
    //2 : On mélange les lettres du mot

    //3 : On demande à l'utilisateur quel est le mot mystère

    return 0;
}