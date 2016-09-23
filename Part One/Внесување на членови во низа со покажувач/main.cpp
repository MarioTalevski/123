#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
 {
     int A[5];
     int *a=A;
     int i=0;
     cout<<"Vnesi gi clenovite na nizata"<<endl;
     for (i=0; i<5; i++)
     {
         cout<<"A["<<i+1<<"]=";
         cin>>*(a++);
     }
     cout<<"Clenovite na nizata se"<<endl;
     for (i=0; i<5; i++)
         cout<<*a++<<"   ";
     cout<<endl;
     
     system ("pause");
     return 0;
 }