#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
struct student
{
       string ime;
       string prezime;
       int poeni1;
       int poeni2;
       float poeni3;
       float poeni;
       int ocena;
       char odgovor1[2][2];
       char odgovor2[2];
       char odgovor3[2];
};


int main()
{
    string prasanje1_1="prasanje 1-1: \n1)a 2)b 3)c 4)d 5)f";
    string prasanje1_2="prasanje 1-2: \n1)a 2)b 3)c 4)d 5)f";
    string prasanje2_1="prasanje 2-1: \n1)a 2)b 3)c 4)d ";
    string prasanje2_2="prasanje 2-2: \n1)a 2)b 3)c 4)d ";
    string prasanje3_1="prasanje 3-1: \n1)a 2)b 3)c ";
    string prasanje3_2="prasanje 3-2: \n1)a 2)b 3)c ";
    
    char tocenodgovor1[2][2];
    tocenodgovor1[0][0]=3;
    tocenodgovor1[0][1]=5;
    tocenodgovor1[1][0]=2;
    tocenodgovor1[1][1]=1;
    char tocenodgovor2[2]={'3', '2'};
    char tocenodgovor3[2]={'1', '2'};
    int i, j;
    struct student rezultati[5];
    for(i=0; i<5; i++)
    {
             cout<<"pocetok"<<endl;
             cout<<"Ime: ";
             cin>>rezultati[i].ime;
             cout<<"Prezime: ";
             cin>>rezultati[i].prezime;
             cout<<"Srekno"<<endl;
             rezultati[i].poeni1=0;
             rezultati[i].poeni2=0;
             rezultati[i].poeni3=0;
             cout<<endl<<endl;
             cout<<"Tocni se 2 od ponudenite odgovori na slednite prashanja"<<endl;
             for(j=0; j<2; j++)
             {
                      switch (j)
                      {
                             case 0: 
                                  cout<<prasanje1_1<<endl;
                                  break;
                             case 1:
                                  cout<<prasanje1_2<<endl;
                                  break;
                             default:
                                     return 0;
                      }
                       label1: cin>>rezultati[i].odgovor1[j][0];
                       cin>>rezultati[i].odgovor1[j][1];
                       if(rezultati[i].odgovor1[j][0]<'1' || rezultati[i].odgovor1[j][1]<'1'||rezultati[i].odgovor1[j][0]>'5'||rezultati[i].odgovor1[j][1]>'5')
                       {
                                                          cout<<"greshka "<<endl;
                                                          goto label1;
                       }
                       if ((rezultati[i].odgovor1[j][0]==tocenodgovor1[j][0]&&rezultati[i].odgovor1[j][1]==tocenodgovor1[j][1])||(rezultati[i].odgovor1[j][0]==tocenodgovor1[j][1]&&rezultati[i].odgovor1[j][1]==tocenodgovor1[j][0]))
                                              rezultati[i].poeni1+=8;
             }
             cout<<"Tocen e 1 od ponudenite odgovori na slednite prashanja"<<endl;
             for(j=0; j<2; j++)
             {
                      switch (j)
                      {
                             case 0: 
                                  cout<<prasanje2_1<<endl;
                                  break;
                             case 1:
                                  cout<<prasanje2_2<<endl;
                                  break;
                             default:
                                     return 0;
                      }
                       label2: cin>>rezultati[i].odgovor2[j];
                       if(rezultati[i].odgovor2[j]<'1'|| rezultati[i].odgovor2[j]>'4')
                       {
                                                         cout<<"greshka, vnesi povtorno ";
                                                         goto label2;
                       }
                       if(rezultati[i].odgovor2[j]==tocenodgovor2[j])
                       rezultati[i].poeni2+=3;
             }
             cout<<"Tocen e 1 od ponudenite odgovori na slednite prashanja"<<endl;
             for(j=0; j<2; j++)
             {
                      switch (j)
                      {
                             case 0: 
                                  cout<<prasanje3_1<<endl;
                                  break;
                             case 1:
                                  cout<<prasanje3_2<<endl;
                                  break;
                             default:
                                     return 0;
                      }
                       label3: cin>>rezultati[i].odgovor3[j];
                       if(rezultati[i].odgovor3[j]<'1'|| rezultati[i].odgovor3[j]>'3')
                       {
                                                         cout<<"greshka, vnesi povtorno ";
                                                         goto label3;
                       }
                       if(rezultati[i].odgovor3[j]==tocenodgovor3[j])
                       rezultati[i].poeni3+=1.5;
             }
             rezultati[i].poeni=rezultati[i].poeni1+rezultati[i].poeni2+rezultati[i].poeni3;
             if(rezultati[i].poeni<=10)
                  rezultati[i].ocena=5;
             else if (rezultati[i].poeni<=13)
                  rezultati[i].ocena=6;
             else if (rezultati[i].poeni<=16)
                  rezultati[i].ocena=7;
             else if (rezultati[i].poeni<=19)
                  rezultati[i].ocena=8;
             else if (rezultati[i].poeni<=22)
                  rezultati[i].ocena=9;
             else 
                  rezultati[i].ocena=10;
    }
             for(i=0; i<5; i++)
                      cout<<"Kandidat"<<rezultati[i].ime<<" "<<rezultati[i].prezime<<" ima ocena: "<<rezultati[i].ocena<<endl<<endl;
     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
