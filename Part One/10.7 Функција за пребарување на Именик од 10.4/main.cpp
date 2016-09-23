#include <cstdlib>
#include <iostream>

using namespace std;
void prebaraj(struct lice*niza, int brlica)
{
     int tip, i, tel, pronajden=0;
     char prebaraj[15];
     cout<<"vnesi 1 za prebaruvanje po ime ili 2 za prebaruvanje po broj: ";
     cin>>tip;
     if(tip==1)
     {
               cout<<"Vnesi ime ili prezime: ";
               cin>>prebaraj;
               for(i=0; i<brlica; i++)
               {
                        if(strcmp(prebaraj, niza[i].ime)==0)|| strcmp (prebaraj, niza[i].prezime)==0)
                        {
                                            cout<<niza[i].ime<<"  "<<niza.prezime<<"  Tel:"<<niza.broj<<endl;
                                            pronajden=1;
                        }
               }
     
     if (pronajden==0)
     cout<<"Ne e pronajden rezultat"<<endl;
     }
     else if(tip==2)
     {
          cout<<"Vnesi broj"<<endl;
          cin>>tel;
          for (i=0; i<brlica; i++)
          {
              if(niza[i].broj==tel)
              {
              cout<<niza[i].ime<<"  "<<niza[i].prezime<<"  tel: "<<niza[i].broj<<endl;
              pronajden=1;
              }
          }
          if(pronajden==0)
          cour<<"Ne e pronajden rezultat"<<endl;
     }
     cout<<endl;
}
     
          

int main(int argc, char *argv[])
{
    system("PAUSE");
    return EXIT_SUCCESS;
}
