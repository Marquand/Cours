#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    int nb,i,posmax,max;
    //Saisie
    cout<<"Entrez le nombre 1";
    cin>>nb;
    i=2;
    max=nb;
    posmax=1;
    while(nb!=0){
                 cout<<"Entrez le nombre :"<<i<<endl;
                 cin>>nb;
                 
                 if(nb>max){
                            max=nb;
                            posmax=i;
                            }
                            i++;
                            }
                            cout<<"Le plus grand nombre saisie est :"<<max<<"a la position"<<posmax<<endl;
                
    system("PAUSE");
    return EXIT_SUCCESS;
}
