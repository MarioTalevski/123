#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
int main()
{
    char ImeNaFajl [80];
    char Sodrzina1[255];
    char Sodrzina2[255];
    char SodrzinaNaTxt;
    cout<<"Vnesete ime na fajlot po izbor i zavrshete so .txt"<<endl;
    cin>>ImeNaFajl;
    ofstream fout(ImeNaFajl);
    cout<<"Vnesi nekoja sodrzina: "<<endl;
    cin.ignore (1, '\n');
    cin.getline(Sodrzina1, 255);
    fout<<Sodrzina1<<"\n";
    cout<<"Vnesi povtorno sodrzina: "<<endl;
    cin.getline(Sodrzina2, 255);
    fout<<Sodrzina2<<"\n";
    fout.close();
    ifstream fin (ImeNaFajl);
    cout<<"Sodrzinata na datotekata: \n";
    while (fin.get(SodrzinaNaTxt))
    cout<<SodrzinaNaTxt;
    cout<<"\n Kraj na datotekata. \n";
    fin.close();
    
    system("pause");
    return 0;
}
    
    
