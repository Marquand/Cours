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
    for(i=a+1;i<=a+10;i++){
                       cout<<"Les 10 nombres suivants sont : "<<i<<endl;}
    system("PAUSE");
    return EXIT_SUCCESS;
}
