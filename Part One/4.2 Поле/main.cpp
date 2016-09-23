#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    char pole[100];
    strcpy(pole, "Programiranje vo C++");
    char *pokpole=&pole[0];
    printf("%s \n", pokpole);
    printf ("Prvata vrednost od pole: %c \n", *pokpole);
    printf ("Adresata na pokpole: %d \n", (int)pokpole);
    pokpole+=17;
    printf("Pokpole bez prvite 17 vrednosti: %s \n", pokpole);
    printf ("Adresata na pokpole: %d \n", (int)pokpole);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
