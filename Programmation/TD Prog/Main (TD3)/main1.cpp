#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    int permis,age,accident,adherent,nb;
    //Saisie
    cout<<"Saisir l'age du conducteur :";
    cin>>age;
    cout<<"Titulaire de permis depuis combien de temps :";
    cin>>permis;
    cout<<"Saisir le nombre d'accident :";
    cin>>accident;
    cout<<"Nombre d'annee d'assurance :";
    cin>>adherent;
    //Traitement
    nb=3;
    if(age<25){
               nb=nb-1;
              }
    if(permis<2){
                 nb=nb+1;
                }
    if(adherent>1){
                   nb=nb+1;
                  }
     nb=nb-accident;
     switch(nb){
     case 1:cout<<"Tarif Rouge"<<endl;break;
     case 2:cout<<"Tarif Orange"<<endl;break;
     case 3:cout<<"Tarif Vert"<<endl;break;
     case 4:cout<<"Tarif Bleu"<<endl;break;
     default :cout<<"Refus"<<endl;break;
     }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
