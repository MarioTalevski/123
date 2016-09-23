#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

#define MAX 80

using namespace std;

int main(int argc, char *argv[])
{
    char red[MAX];
    char*pok, *pisi, *stoj;
    int n;
    cout<<"Vnesi edna recenica"<<endl;
    gets(red);
    n=strlen(red);
    pok=&red[n];
    cout<<"Zapishuvanje na bukvite vo obraten red"<<endl;
    while (pok>=red)
    cout<<*pok--;
    cout<<endl;
    cout<<"Zapishuvanje na zborovite vo obraten red"<<endl;
    stoj=pok=&red[n];
    while (pok-->=red)
    {
          if (*pok==' ' || pok==red)
          {
                      pisi=pok;
                      while(pisi<=stoj)
                      cout<<*pisi++;
                      stoj=pok;
          }
    }                  
    system("PAUSE");
    return EXIT_SUCCESS;
}
