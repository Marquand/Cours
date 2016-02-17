#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    int heure, minute, resultat,resultat2;
    //Saisie
    cout<<"Saisir l'heure actuelle : ";
    cin>>heure;
    cout<<"Saisir les minutes actuelle : ";
    cin>>minute;
    resultat = minute+1;
    resultat2=heure+1;
    //Traitement
    if (minute<59){
                   cout<<"Dans une minutes, il sera " <<heure<< " heures et "<<resultat<<" minutes."<<endl;
                  }else{
                        if((heure>=23)&&(minute>=59)){
                                                      cout<<"Dans une minutes il sera 00 et 00 minutes"<<endl;
                                                      }else{
                                                            if (minute>=59){
                                                                           cout<<"Dans une minute, il sera "<<resultat2<<"heures et 00 minutes."<<endl;
                                                                           }
                                                                           }
                                                                           }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
