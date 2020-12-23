#include <iostream>
#include <ctime> // Obligatoire
#include <cstdlib> // Obligatoire
#include <string>
using namespace std;


void saisiemot(string &mot)
{
    
    cout << "choissisez un mot"<<endl;
    cin >> mot;
    

}
void melangelettre(string &mot)
{
    string nouveaumot;
    while (mot.size()!=0)
    {
        int position1 = rand()%mot.size();
        cout << "choix de la " << position1+1 <<" lettre"<<endl;
        nouveaumot += mot[position1];
        mot.erase(position1,1);
    }
    cout << nouveaumot <<endl;
/*     cout << "choix de la " << position2+1 <<" lettre"<<endl;
    cout << "Lettres choisie au hasard :" << mot[position1]<< mot[position2]<<endl; */
}

int main()
{    
    srand(time(0));
    //1 : On demande de saisir un mot
    string motuser;
    cout << "debut fct1"<<endl;
    saisiemot(motuser);
    cout << "fin fct1"<<endl;
    cout <<"mot choisie par l'utilisateur "<< motuser<< endl;;
    //2 : On mélange les lettres du mot
    cout << "debut fct2"<<endl;
    melangelettre(motuser);
    cout << "fin fct2"<<endl;

    //3 : On demande à l'utilisateur quel est le mot mystère

    return 0;
}