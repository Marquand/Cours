#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    double a,i;
    //Saisie
    cout<<"Saisir un nombre de depart : ";
    cin>>a;
    for(i=1;i<=10;i++){
                       cout<<"La table de multiplication de "<<a<<" est "<<a<<"x"<<i<<" : "<<a*i<<endl;}
    system("PAUSE");
    return EXIT_SUCCESS;
}
