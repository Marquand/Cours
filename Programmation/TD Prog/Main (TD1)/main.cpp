#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    int nb,resultat;
    //Saisie des données
    cout<< "Entrez un nombre : ";
    cin>>nb;
    //Traitement
    resultat = nb+nb;
    //affichage
    cout<< "Le carre de "<<nb<< " est : "<<resultat<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
