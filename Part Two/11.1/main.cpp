#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
struct element
{
       int indbr;
       char prezime[15];
       char ime[15];
       float prosek;
       element*pok;
};
void vnes(element*tekoven)
{
     
     tekoven->pok=0;
     cout<<"Vnesi broj na indeks"<<endl;
     cin>>tekoven->indbr;
     cout<<"Vnesi prezime"<<endl;
     cin>>tekoven->prezime;
     cout<<"Vnesi ime"<<endl;
     cin>>tekoven->ime;
     cout<<"Vnesi prosek"<<endl;
     cin>>tekoven->prosek;
}

void ispis(element*tekoven)
{
     
     while((tekoven->pok!=0) || (tekoven->pok==0))
     {
                             cout<<"prezime "<<tekoven->prezime<<"  ";
                             cout<<"ime "<<tekoven->ime<<"  ";
                             cout<<"broj na indeks "<<tekoven->indbr<<"  ";
                             cout<<"prosek "<<tekoven->prosek<<"  ";
                             if(tekoven->pok==0)
                             break;
                             tekoven=tekoven->pok;
     }
}

int main(int argc, char *argv[])
{
    struct element student[100];
    element*tekoven, *sleden, *pocetok;
    int izbor=-1;
    while(izbor!=0)
    {
                   cout<<"Pritisni 1 kreiranje na lista i prv vnes";
                   cout<<"2 za popolnuvanje, 3 za ispis i 0 za izlez"<<endl;
                   cin>>izbor;
                   switch(izbor)
                   {
                                case 1:
                                     tekoven= new element;
                                     
                                     vnes(tekoven);
                                     pocetok=tekoven;
                                     break;
                                case 2:
                                     sleden= new element;
                                     tekoven->pok=sleden;
                                     vnes(tekoven);
                                     break;
                                case 3:
                                     ispis(tekoven);
                                     break;
                                case 0:
                                     break;
                                default:
                                        cout<<"Pogresen vlez"<<endl;
                   }
                   cout<<endl;
    }
     system("PAUSE");
    return EXIT_SUCCESS;
}
