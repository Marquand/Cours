#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    double photo,f1, f2, f3, p1, p2, r1, r2, r3;
    //Saisie
    cout<<"Nombre de photocopies a effectuer : ";
    cin>>photo;
    p1 = photo-10;
    p2 = p1-20;
    f1 = photo*0.10;
    f2 = p1*0.09;
    f3 = p2*0.08;
    r1 = f1;
    r2 = f1+f2;
    r3 = r2+f3;
    //Traitement
    if(photo<=10){
                  cout<<"La facture s'eleve a :"<<r1<<" euros"<<endl;
                  }else{
                        if ((photo>10)&&(photo<=30)){
                                      cout<<"La facture s'eleve a :"<<r2<<" euros"<<endl;
                        }else{
                              if (photo>30){
                                           cout<<"La facture s'eleve a :"<<r3<<" euros"<<endl;
                                           }
                                           }
                                           }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
