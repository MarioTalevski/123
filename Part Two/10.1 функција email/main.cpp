#include <cstdlib>
#include <iostream>

using namespace std;

char *email(char*ime, char*prezime)
{
     char adresa[]="@gmail.com";
     char*p, *pom;
     p=prezime;
     pom=adresa;
     while(*p!='\0')
     p++;
     *p='.';
     p++;
     while(*ime!='\0')
     {
                      *p=*ime;
                      ime++;
                      p++;
     }
     while(*pom!='\0')
     {
                      *p=*pom;
                      pom++;
                      p++;
     }
     return (p);
}
int main(int argc, char *argv[])
{
    char *imee;
    char *prezimee;
    char *c;
    char ime[20];
    char prezime[20];
    cout<<"Vnesi ime: ";
    cin>>ime;
    cout<<"Vnesi prezime: ";
    cin>>prezime;
    c=prezime;
    imee=ime;
    prezimee=prezime;
    prezimee=email(ime, prezime);
    cout<<"E-mail-ot e: "<<c<<endl;
    cout<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
