#include <cstdlib>
#include <iostream>
#include <string.h>

#define MAX 100

using namespace std;
struct struktura
{
       char ime[15];
       char prezime[20];
       int telefon;
};
void sortiraj (struct struktura* niza, int brlica)
{
     struct struktura temp;
     int i, j;
     for (i=0; i<brlica-1; i++)
     for(j=0; j<brlica-1; j++)
     {
              int ime=strcmp (niza[j].ime, niza[j+1].ime);
              int prezime=strcmp(niza[j].prezime, niza[j+1].prezime);
              if (ime>0 ||(ime==0 && prezime>0 ))
              {
                        temp=niza[j];
                        niza[j]=niza[j+1];
                        niza[j+1]=temp;
              }
     }
}
     
void vnesi (struct struktura*niza, int*brlica)
{
     struct struktura v;
     if (*brlica==MAX)
     cout<<"Imenikot e popolnet"<<endl;
     else
     {
         cout<<"Vnesi ime: ";
         cin>>v.ime;
         cout<<"Vnesi prezime: ";
         cin>>v.prezime;
         cout<<"Vnesi broj";
         cin>>v.telefon;
         cout<<endl;
         niza[(*brlica)++]=v;
         sortiraj(niza, *brlica);
     }
}

void ispis(struct struktura*niza, int brlica)
{
     int i;
     for (i=0; i<brlica; i++)
     cout<<niza[i].ime<<"  "<<niza[i].prezime<<"  tel:"<<niza[i].telefon<<endl;
}
void prebaraj(struct struktura*niza, int brlica)
{
     char baraj[20];
     int i, j, tip, broj, pronajden=0; 
     cout<<"Za prebaruvanje po ime vnesi 1,za po broj vnesi 2"<<endl;
     cin>>tip;
     if (tip==1)
     {
                cout<<"Vnesi ime za prebaruvanje: ";
                cin>>baraj;
                for (i=0; i<brlica; i++)
                {
                    if(strcmp(niza[i].ime, baraj)==0 || strcmp(niza[i].prezime,baraj)==0)
                    {
                    cout<<niza[i].ime<<" "<<niza[i].prezime<<" tel:"<<niza[i].telefon;
                    pronajden=1;
                    }
                }
                if (pronajden==0)
                cout<<"Nema rezultat"<<endl;
     }
     else if(tip==2)
     {
          cout<<"Vnesi broj za prebaruvanje: ";
          cin>>broj;
          for (i=0; i<brlica; i++)
              if(broj==niza[i].telefon)
              {
                    cout<<niza[i].ime<<" "<<niza[i].prezime<<" tel:"<<niza[i].telefon;
                    pronajden=1; 
              }
           if (pronajden==0)
           cout<<"Nema rezultat "<<endl;     
     }
}
                

int main()
{
    int vnesuvanje=0;
    int izbor= -1;
    struct struktura imenik[MAX];
    while (izbor!=0)
    {
          cout<<"Za zapisuvanje vo imenikot vnesi 1. ";
          cout<<"Za ispis od imenik vnesi 2. ";
          cout<<"Za prebaruvanje vo imenikot vnesi 3. ";
          cout<<"Za izlez vnesi 0"<<endl;
          cin>>izbor;
          switch (izbor)
          {
                 case 1:
                      vnesi(imenik, &vnesuvanje); break;
                 case 2:
                      ispis(imenik, vnesuvanje); break;
                 case 3: 
                      prebaraj (imenik, vnesuvanje); break;
                 case 0:
                      break;
                 default:
                         cout<<"Pogresen vlez";
          }
          
    }                    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}