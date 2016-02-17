#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Declaraation des variables
    int nb;
    while(1){
    //Saisie
    cout<<"Entrez un nombre: "<<endl;
    cin>>nb;
    if(nb>0){
             cout<<"Le nombre est positif "<<endl;
             }else{
                   if(nb<0){
                            cout<<"Le nombre est negatif "<<endl;
                            }else{
                                  cout<<"Le nombre est egale a 0 "<<endl;
}
}
}     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
