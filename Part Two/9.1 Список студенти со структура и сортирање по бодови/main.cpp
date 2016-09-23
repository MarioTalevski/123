#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
struct struktura
{
       char ime[100];
       char prezime[100];
       int bodovi;
};
int main()
{
    struct struktura spisok[100];
    struct struktura pom;
    int i,j, n;
    printf("Vnesete broj na kandidati \n");
    scanf ("%d", &n);
    for (i=0; i<n; i++)
    {
        printf ("Kandidat broj %d \nVnesi ime: ", i+1);
        scanf ("%s", &spisok[i].ime);
        printf ("Vnesi prezime: ");
        scanf("%s", &spisok[i].prezime);
        printf ("Vnesi bodovi: ");
        scanf("%d", & spisok[i].bodovi);
    }
    
    printf ("Kandidatite podredeni spored najgolem broj na bodovi: \n");
    for (i=0; i<n-1; i++)
    for(j=0; j<n-1; j++)
    {
                      if (spisok[j].bodovi<spisok[j+1].bodovi)
                      {
                      pom=spisok[j];
                      spisok[j]=spisok[j+1];
                      spisok[j+1]=pom;
                      }
    }
    for (i=0; i<n; i++)
    printf ("%s  %s  %d \n", spisok[i].prezime, spisok [i].ime, spisok[i].bodovi);
    printf ("\n");
                      
                    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
