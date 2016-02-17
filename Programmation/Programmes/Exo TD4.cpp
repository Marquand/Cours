#include <cstdlib>
#include <iostream>

using namespace std;

//Déclaration de variables
//globales
double valeurFuture;
       (double C,int N,double T){
               double VF;
               VF= C*(1+T*N/100);
               return VF;
               }
               
int main (){
    double capital,taux,valeurF;
    int annee;
    //Saisie
    cout<<"Quel est votre capital : ";
    cin>>capital;
    cout<<"Taux interet : ";
    cin>>taux;
    cout<<"Combien d'année : ";
    cin>>annee;
    valeurF= valeurFuture(capital,annee,taux);
    cout<<" Valeur Future : "<<valeurF;
    
	system(" pause ") ;
	return 0 ;
}
