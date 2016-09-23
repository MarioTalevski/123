#include <cstdlib>
#include <iostream>

using namespace std;

struct vreme 
{
    int saati;
    int minuti;
    int sekundi;
};

struct vreme vnesi()
{
       struct vreme v;
       do
       {
       cout<<"Saati: ";
       cin>>v.saati;
       if(v.saati<0 || v.saati>23)
                    cout<<"Vnesi vrednost od 0 do 23"<<endl;            
       else 
            break;
       }
       while (1);
       do
       {
             cout<<"Minuti: ";
             cin>>v.minuti;
             if (v.minuti<0 || v.minuti>59)
             cout<<"Vnesi vrednost od 0 do 59"<<endl;
             else
             break;
       }
       while (1);
      do
       {
             cout<<"Sekundi: ";
             cin>>v.sekundi;
              if (v.sekundi<0 || v.sekundi>59)
             cout<<"Vnesi vrednost od 0 do 59"<<endl;
             else
             break;
       }
       while (1);
       return v;
};
int period(struct vreme v1, struct vreme v2)
{
    int sekundi=0;
    sekundi=sekundi+(v2.sekundi-v1.sekundi);
    sekundi=sekundi+(v2.minuti-v1.minuti)*60;
    sekundi=sekundi+(v2.saati-v2.saati)*3600;
    
    return sekundi;
}
    
int main(int argc, char *argv[])
{
    struct vreme v1, v2;
    cout<<"Vnesi go prvoto vreme"<<endl;
    v1=vnesi();
    cout<<endl;
    cout<<"Vnesi go vtoroto vreme"<<endl;
    v2=vnesi();
    cout<<endl;
    cout<<"Pomegu 2te vneseni vreminja pominale "<<period(v1,v2)<<" sekundki"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
