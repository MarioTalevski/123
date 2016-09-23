#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int zamislenbr, pogodok;
    srand(time(NULL));
    rand();
    zamislenbr=(static_cast<float>(rand())/RAND_MAX)*10;
    cout<<"Za pogoduvanje na brojot vnesi broevi 1-10"<<endl;
    do
    {
              cout<<"Vnesi broj: ";
              cin>>pogodok;
    }
    while (pogodok!=zamislenbr);
    cout<<endl;
    cout<<"Pogodivte, zamisleniot broj e:"<<pogodok<<endl;
    cout<<endl;
              
    system("PAUSE");
    return EXIT_SUCCESS;
}
