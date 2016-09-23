#include <cstdlib>
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
void ispis(FILE*datoteka)
{
     char znak;
     printf("\nSodrzinata na  datotekata e: \n \n");
     while (fscanf(datoteka, "%c, &znak")!=EOF)
     printf("%c", znak);
     printf("\n");
}

int main(int argc, char *argv[])
{
    FILE*datoteka;
    datoteka=fopen("E:\\pismo.txt", "r"); //pozicijata kaj sho e datotekata
    ispis(datoteka);
    fclose(datoteka);
    system("PAUSE");
    return EXIT_SUCCESS;
}
