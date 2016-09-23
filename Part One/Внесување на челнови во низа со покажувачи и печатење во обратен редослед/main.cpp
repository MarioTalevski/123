#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cout<<"Vnesi go brojot na clenovi vo nizata:";
    cin>>n;
    int A[n];
    int*a=A;
    for (i=0; i<n; i++)
    {
        cout<<"A["<<i+1<<"]=";
        cin>>*a++;
    }
    cout<<endl;
    cout<<"Pecatenje na nizata vo obraten redosled: "<<endl;
    for (i=0; i<n; i++)
        cout<<*(--a)<<endl;
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
