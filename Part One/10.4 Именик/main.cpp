#include <cstdlib>
#include <iostream>

using namespace std;
#define MAX 100

struct lice
{
     char ime[15];
     char prezime[20];
     int broj;
};
void vnesi(struct lice *niza, int *brlica)  
{
     struct lice v;
     if(*brlica>=MAX) 
     {
                      cout<<"Imenikot e popolnet"<<endl;
                      return;
     }
     cout<<"Vnesete ime: ";
     cin>>v.ime;
     cout<<"Vnesete prezime: ";
     cin>>v.prezime;
     cout<<"Vnesete broj: ";
     cin>>v.broj;
     niza [(*brlica)++]=v;
}
void ispisi(struct lice*niza, int brlica)
{
     int i;
     for(i=0; i<brlica; i++)
     {
              cout<<niza[i].ime<<" ";
              cout<<niza[i].prezime<<"   ";
              cout<<"Tel: "<<niza[i].broj<<endl;
     }
}
int main(int argc, char *argv[])
{
    struct lice imenik[MAX];
    int vnesuvanje=0, izbor=-3;
    while (izbor!=0)
    {
          cout<<"Vnesi 1 za vnes, 2 za pecatenje i 0 za izlez: ";
          cin>>izbor;
          switch(izbor)
          {
                       case 1:
                       {
                            vnesi(imenik, &vnesuvanje);
                            break;
                       }
                       case 2:
                       {
                            ispisi(imenik, vnesuvanje);
                            break;
                       }
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
