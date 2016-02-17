#include <cstdlib>
#include <iostream>

using namespace std;

//Déclaration d'un sous-prog
void dessinerLigne(){
	int i ;
	for(i=1 ; i<=5 ; i++){
		cout<< "*" ;
	}
	cout<<endl; //saut de ligne
}
// programme principale
int main(){
	int n ;
	for(n=1 ; n<10 ; n++){
		dessinerLigne() ; //appel du sous prog
	}
	system(" pause ") ;
	return 0 ;
}
