#include <cstdlib>
#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int zamislenbr, x, y;
    int pogodok;
    srand(time(NULL));
    rand();
    pogodok=(static_cast<float>(rand())/RAND_MAX)*10;
    printf("Vnesi broj pomegu 0 i 10:");
    scanf ("%d", &zamislenbr);
    bool a=true;
    
    while(a)
    {
             
             
             if(zamislenbr==pogodok)
             {
                                    printf("Pogodok");
                                    cout<<endl;
                                    a=false;
             }
             else
             {
             printf("Vnesi nareden broj pomegu 1 i 10:");
             scanf ("%d", &zamislenbr);
             }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
