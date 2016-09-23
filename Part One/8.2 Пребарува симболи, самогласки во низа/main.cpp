#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int znaci(char*znak)
{
     int brojac=0;
     while (*znak!='\0')
     {
           if(ispunct(*znak))
           brojac++;
           znak++;
     }
     return(brojac);
}
int samoglaski(char*znak)
{
    int br=0;
    while(*znak!='\0')
    {
                      if(*znak=='a' || *znak=='A' ||*znak=='e' ||*znak=='E' ||*znak=='i' ||*znak=='I' ||*znak=='o' ||*znak=='O' ||*znak=='u' ||*znak=='U')
                                    br++;
                                    znak++;
    }
    return (br);
}
                      
int main()
{
    char str[80];
    cout<<"Vnesi recenica od maksimum 80 karakteri"<<endl;
    gets(str);
    char*a=str;
    int n=strlen(str);
    cout<<"Vnesenata recenica ima "<<n<<" znaci od koi "<<samoglaski(a)<<" samoglaski i "<<znaci(a)<<" interpukciski znaci"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
