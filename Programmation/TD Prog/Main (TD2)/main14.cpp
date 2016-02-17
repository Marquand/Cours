#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    int a,i,z=1;
    //Saisie
    cout<<"Saisir un nombre de depart : ";
    cin>>a;
    for(i=1;i<=a;i=i+1)z=z*i;{
    cout<< "La multiplication des entiers jusqu'a ce nombre est :" <<z<<endl;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
