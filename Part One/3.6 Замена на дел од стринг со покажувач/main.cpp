#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
void f1(char *p)
{
     *p='?';
     p++;
     *p='!';
     p++;
     *p='?';
}
void f2(char *pok)
{
     *pok='0';
     pok++;
     *pok=';';
     pok++;
     *pok='-';
     pok++;
     *pok=')';
}

int main()
{
    char planina[]="Pelister";
    char zima[]="Ima mnogu sneg";
    printf ("%s \n", planina);
    f1(planina);
    printf ("Noviot string %s\n", planina);
    printf("%s \n", zima);
    f2(zima);
    printf ("Nova zima %s \n", zima);
    
system ("pause");
return 0;
}