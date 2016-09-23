#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

#define KRAJ (struct ime*) 0

struct ime
{
       char*p_ime;
       struct ime*next;
};
struct ime*start=KRAJ;

void vnes (void)
{
     struct ime*posleden, *nov;
     char linija [128];
     cout<<"Dodavanje nov element na kraj od listata. "<<endl;
     nov= (struct ime*)malloc(sizeof(struct ime));
     if(nov==NULL)
     {
                  cout<<"Nema dovolno memorija";
                  exit(-1);
     }
     nov->next=KRAJ;
     cout<<"Vnesi ime>";
     cin>>linija;
     nov->p_ime=(char*) malloc(strlen(linija)+1);
     if(nov->p_ime==NULL)
     {
                         cout<<"Nema dovolno memorija"<<endl;
                         exit(-1);
     }
     strcpy(nov->p_ime, linija);
     if(start==KRAJ)
     start=nov;
     else
     {
         for(posleden=start; posleden->next!=KRAJ; posleden=posleden->next)
         posleden->next=nov;
     }
}
void ispis(void)
{
     struct ime*element;
     int i=1;
     if(start==KRAJ)
     {
                    cout<<"Listata e prazna"<<endl;
                    return;
     }
     cout<<"Ispis na listata: "<<endl;
     for(element=start; element!=KRAJ; element= element->next)
     {
                        cout<<i<<" "<<element->p_ime<<endl;
                        i++;
     }
     return;
}
void barajstring(void)
{
     struct ime*test;
     char linija[128];
     int i;
     cout<<"Pronaogjanje na ime vo listata"<<endl;
     cout<<"Vnesi ime"<<endl;
     cin>>linija;
     i=1;
     for(test=start; test!=KRAJ; test=test->next)
     {
                     if(!strcmp(test->p_ime, linija))
                     {
                                             cout<<"Podatokot e na "<<i<<" mesto vo listata"<<endl;
                                             return;
                     }
     i++;
     }
     cout<<"Podatokot ne e vo listata"<<endl;
}
void brisi(void)
{
     struct ime*test, *tmp;
     char linija[128];
     int i;
     cout<<"Brisenje na ime od listata"<<endl;
     if(start==KRAJ)
     {
                    cout<<"Listata e prazna"<<endl;
                    return;
     }
     cout<<"Vnesi ime: ";
     cin>>linija;
     if(!strcmp(start->p_ime, linija))
     {
                              cout<<"Pogodokot e 1. vo listata"<<endl;
                              tmp=start;
                              start=start->next;
                              free(tmp->p_ime);
                              free(tmp);
                              return;
     }
     i=1;
     
     for(test=start; test!=KRAJ; test=test->next)
     {
                     i++;
                     if(!(tmp=test->next))
                     break;
                     if(!strcmp(tmp->p_ime, linija))
                     {
                                           cout<<"Izbrisan e podatokot br "<<i<<" vo listata"<<endl;
                                           test->next=test->next->next;
                                           
                                           free(tmp->p_ime);
                                           free(tmp);
                                           return;
                     }
     }
     cout<<"Podatokot ne e na listata"<<endl;
     return;
}
int main(int argc, char argv[])
{
    int izbor=0;
    cout<<endl<<endl<<endl;
    cout<<"OPERACII: "<<endl;
    cout<<"================="<<endl;
    cout<<"1. vnes na nov element"<<endl;
    cout<<"2. ispis na listata"<<endl;
    cout<<"3. prebaruvanje po vnesena sodrzina"<<endl;
    cout<<"4. brisenje"<<endl;
    cout<<"5. izlez"<<endl;
    
    
while(izbor!=5)
{
 label: cout<<"izbor="<<endl;
    cin>>izbor;
    switch(izbor)
    {
                 case 1:
                      vnes();
                      break;
                 case 2:
                      ispis();
                      break;
                 case 3:
                      barajstring();
                      break;
                 case 4:
                      brisi();
                      break;
                 case 5:
                      break;
                 defaut:
                        cout<<"Pogresen izbor"<<endl;
                        goto label;
    }
    }
                        
    system("PAUSE");
    
    
    return EXIT_SUCCESS;
}
