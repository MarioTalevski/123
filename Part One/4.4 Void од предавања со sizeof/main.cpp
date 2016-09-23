#include <cstdlib>
#include <iostream>

using namespace std;
void zgolemi (void*podatok, int psize)
{
     if(psize==sizeof(char))
     {
                            char*pchar;
                            pchar=(char*)podatok;
                            ++(*pchar);
     }
     else if(psize==sizeof(int))
     {
          int*pint;
          pint=(int*)podatok;
          ++(*pint);
     }
}   

int main()
{
    char a='x';
    int b= 23;
    zgolemi(&a, sizeof(a));
    zgolemi (&b, sizeof(b));
    cout<<a<<","<<b<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
