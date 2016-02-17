#include <cstdlib>
#include <iostream>

using namespace std;

//Déclaration de variables
int nbHeure, nbMinutes, nbSecondes, totSec;
//Sous-programme
void hms(){
     int heures,minutes,secondes;
     heures= nbHeure*3600;
     minutes= nbMinutes*60;
     secondes= nbSecondes;
     totSec=heures+minutes+secondes;
     cout<<totSec<<endl;
     }

//Programme Principale
int main(){
    cout<<"Saisir un nombre heure, minutes, secondes :";
    cin>>nbHeure>>nbMinutes>>nbSecondes;
//Appel du sous-programme
    hms();
    
	system(" PAUSE ") ;
	return 0 ;
}
