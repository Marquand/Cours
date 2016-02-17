#include <cstdlib>
#include <iostream>

using namespace std;

//Déclaration de variables
int nbSecondes;

//Sous-programme
void hms(){
     int heures,minutes,secondes;
     int reste;
     heures= nbSecondes/3600;
     reste= nbSecondes%3600;
     minutes= reste/60;
     secondes= reste%60;
     cout<<heures<<":"<<minutes<<":"<<secondes<<endl;
     }

//Programme Principale
int main(){
    cout<<"Saisir un nombre de seconde :";
    cin>>nbSecondes;
//Appel du sous-programme
    hms();
    
	system(" PAUSE ") ;
	return 0 ;
}
