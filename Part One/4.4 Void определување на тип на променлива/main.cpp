#include <iostream>
#include <cstdlib>

using namespace std;

void pecati(void*pok, char tip)
{
     if (tip=='c')
     {
                  char*cpok=(char*)pok;
                  cout<<*cpok<<endl;
     }
     else if (tip=='i')
     {
          int*ipok=(int*)pok;
          cout<<*ipok<<endl;
     }
     else if (tip=='f')
     {
          float*fpok=(float*)pok;
          cout<<*fpok<<endl;
     }
     else
     cout<<"Ne e prepoznaen tipot na promenlivata"<<endl;
}
int main ()
{
    int a=10;
    char b='m';
    float c=4.23;
    double max=23;
    pecati (&a, 'i');
    pecati (&b, 'c');
    pecati (&c, 'f');
    pecati (&max, 'd');
    cout<<endl;
    
    system ("pause");
    return 0;
}

    