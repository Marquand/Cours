#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    double A;
    bool O;
    //Saisie
    do
    {
    cout<<"Saisir un nombre compris entre 1 et 3 : ";
    cin>>A;
    O= A<3 && A>1;
    if(!O)cout<<"Ce nombre n'est pas compris entre 1 et 3"<<endl;
    }while(!O);
    system("PAUSE");
    return EXIT_SUCCESS;
}

