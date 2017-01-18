#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
int dolzina(char*znak)
{
    int n=0;
    while (*znak!='\0')
    {
          n++;
          znak++;
    }
    return n;
}
int brojki(char*znak)
{
    int br=0;
    while(*znak!='\0')
    {
        if(isdigit(*znak))
        br++;
        znak++;
    }
    return br;
}
int bukvi(char*znak)
{
    int bu=0;
    while (*znak!='\0')
    {
          if(isalpha(*znak))
              bu++;
              znak++;

    }
    return bu;
}

int main()
{
    char A[80];
    char*a=A;
    cout<<"Vnesi edna recenica od maksimum 80 karakteri"<<endl;
    gets(A);
    cout<<"Vneseniot string ima dolzina "<<dolzina(a)<<" karakteri. Od niv "<<bukvi(a)<<" se bukvi i "<<brojki(a)<<" se brojki. "<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
