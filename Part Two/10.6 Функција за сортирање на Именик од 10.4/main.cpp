#include <cstdlib>
#include <iostream>

using namespace std;

void sortiraj(struct lice *niza, int brlica)  
{
     int i, j;
     for (i=0; i<brlica-1; i++)
     for (j=i+1; j<brlica; j++)
     {
         int prezime=strcmp(niza[i].prezime, niza[j].prezime);
         int ime=strcmp(niza[i].ime, niza[j].ime);
         if(prezime>0||(prezime==0&& ime>0))
         {
                                     struct lice temp=niza[i];
                                     niza[i]=niza[j];
                                     niza[j]=temp;
         }
     }
}
         
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
     sortiraj(niza, *brlica);
}

