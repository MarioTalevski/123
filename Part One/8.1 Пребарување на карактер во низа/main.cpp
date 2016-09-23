#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char A[80], x;
    char*a=A;
    int brojac=0;
    cout<<"Vnesi edna recenica od maksimum 80 krakteri"<<endl;
    gets(A);
    int m=strlen(A);
    cout<<"Vnesi go elementot koj ke se prebaruva"<<endl;
    cin>>x;
    while (*a!= '\0')
    {
          if(*a==x)
          brojac++;
          a++;
    }
    cout<<"Vneseniot string ima dolzina "<<m<<" karakteri.";
    cout<<"Karakterot "<<x<<" se javuva "<<brojac<<" pati"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
