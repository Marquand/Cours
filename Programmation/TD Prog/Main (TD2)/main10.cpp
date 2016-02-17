#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    double a;
    //Saisie
    do
    {
    cout<<"Entrez un nombre entre 10 et 20 : ";
    cin>>a;
          if(a<10){
                   cout<<"Plus grand !"<<endl;
                   }else if(a>20){
                                  cout<<"Plus petit !"<<endl;}
                                  }while (a<10||a>20);
                                  
    system("PAUSE");
    return EXIT_SUCCESS;
}
