#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration de variables
    int nb;
    while(1){
    //Saisie
    cout<< "Entrez votre age " ;
    cin>>nb;
    if ((6<=nb)&&(nb<=7)){
                  cout<<" Vous appartenez a la categorie Poussin"<<endl;
                  }else{
                        if ((8<=nb)&&(nb<=9)){
                                      cout<<"Vous appartenez a la categorie Pupille"<<endl;
                                      }else{
                                            if ((10<=nb)&&(nb<=11)){
                                                            cout<<"Vous appartenez a la categorie Minime"<<endl;
                                                            }else{
                                                                  if (nb>=12){
                                                                  cout<<"Vous appartenez a la categorie Cadet"<<endl;
                                                                  }
                                                                  }
                                                                  }
                                                                  }
                                                                  }
    system("PAUSE");
    return EXIT_SUCCESS;
}  
