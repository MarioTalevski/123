#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    char imefajl[80], ime[255], prezime[255], datum[255], e_mail[255];
    int i, br;
    
    cout<<"Vnesi go imeto na datotekata"<<endl;
    cin>>imefajl;
    ofstream fout(imefajl);
    cout<<"Vnesi go brojot na studenti: ";
    cin.ignore(1, '\n');
    cin>>br;
    for (i=0; i<br; i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Vnesi ime:  ";
        cin.getline(ime, 255);
        fout<<ime<<"\n";
        cout<<"Vnesi prezime: ";
        cin.getline(prezime, 255);
        fout<<prezime<<"\n";
        cout<<"Vnesi datum na raganje: (dd.mm.gg): ";
        cin.getline(datum, 255);
        fout<<datum<<"\n";
        cout<<"Vnesi e_mail"<<endl;
        cin.getline(e_mail,255);
        fout<<e_mail<<"\n";
    }
    fout.close();
    cout<<endl;
    cout<<endl;
    cout<<"Zapishanata sodrzina e"<<endl;
    ifstream fin(imefajl);
    char sodrzina;
    while (fin.get(sodrzina))
        cout<<sodrzina;
        cout<<endl;
        cout<<"Kraj na datotekata"<<endl;
    fin.close();
    
        
        
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
