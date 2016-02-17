#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Déclaration des variables
    int i,a,x,b;
    //Saisie
    b=0;
    for(i=0;i<20;i++){
        b=b+1;
        cout<<"Entrez le nombre "<<b<<" : ";
        cin>>x;
        if(i==0)a=x;
        else if(x>a)a=x;
        }
 
        cout<<"Le plus grand de ces nombres est : "<<a<<endl;
                
    system("PAUSE");
    return EXIT_SUCCESS;
}
