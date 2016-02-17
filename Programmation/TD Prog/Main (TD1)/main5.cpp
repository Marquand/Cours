#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Declaraation des variables
    int nb, nbr, resultat;
    while(1){
    //Saisie
    cout<<"Entrez un nombre: ";
    cin>>nb;
    cout<<"Entrez un second nombre: ";
    cin>>nbr;
    resultat = nb*nbr;
    if(resultat>0){
             cout<<"Le produit est positif "<<endl;
             }else{
                   if(resultat<0){
                            cout<<"Le produit est negatif "<<endl;
                            }else{
                                  cout<<"Le produit est nul "<<endl;
}
}
}     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
