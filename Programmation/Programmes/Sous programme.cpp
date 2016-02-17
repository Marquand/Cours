#include <cstdlib>
#include <iostream>

using namespace std;

//Déclaration de variables
//globales
int nbE; //nombre d'étoiles

void dessinerLigne(){
     int i;
     for(i=1;i<=nbE;i++){
                         cout<<"*";
                         }
     cout<<endl;//saut de ligne
     }
int main(...){
    int nbL;//nombre de ligne
    int i;
    
    cout<<"Entrez le nombre de lignes: ";
    cin>>nbL;
    cout<<"Le nombre d'étoiles/lignes: ";
    cin>>nbE;
    for(i=1;i<=nbL;i++){
                        dessinerLigne();
                        }
	system(" pause ") ;
	return 0 ;
}
