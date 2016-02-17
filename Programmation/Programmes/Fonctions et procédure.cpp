#include <cstdlib>
#include <iostream>

using namespace std;
//déclaration des sous programmes
double ttc(){
    double resultat ;
	double pht ;
	cout<< "Prix hors taxe : " ;
	cin>>pht ;
	resultat= pht + 1.2 ; //20%
	return resultat ;
}

int main(){
double total ;
	int i ;
	total =0 ;
	for(i=1 ;i<=5 ;i++){
		total=total+ttc() ;
	}
	cout<<  " Le prix total = "<<total<<endl ;
system(" pause ") ;
return 0 ;
}
