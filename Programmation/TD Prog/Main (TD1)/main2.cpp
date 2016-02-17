#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Declaration variable
    int nb;
    double resultat, HT, TVA;
    //Saisie
    cout<<"Prix HT: ";
    cin>>HT;
    cout<<"Nombre d'article: ";
    cin>>nb;
    cout<<"Taux de TVA: ";
    cin>>TVA;
    //Traitement
    resultat=(HT*nb)*(1+TVA/100);
    //Affichage
    cout<<"Prix total : " <<resultat<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
