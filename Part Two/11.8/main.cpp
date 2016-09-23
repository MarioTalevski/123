#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;
#define SIZE 5
struct account 
{
       char nickname[15];
       char lozinka[10];
};

int main(int argc, char *argv[])
{
    struct account lista [SIZE]={{ "Neo", "matrix-m"}, {"Trinity", "matrix-f"}, {"Vendeta","anarh"}, {"Harry", "Potter"}, {"Nekoj345","110819"}};
    FILE*fp;
    int i;
    if((fp=fopen("1.dat", "wb"))==NULL)
    {
                          fprintf(stderr, "Error: greska pri otvaranje""datoteka1.dat\n");
                          exit(-1);
    }
    for(i=0; i<SIZE; ++i)
    {
             if(fwrite(&lista[i], sizeof(lista[i]), 1,fp)!=1)
             {
             fprintf(stderr, "Greska pri zapisuvanje vo lozinki.dat \n");
             exit(-1);
             }
    }
    fclose(fp);
    system("PAUSE");
    return EXIT_SUCCESS;
}
