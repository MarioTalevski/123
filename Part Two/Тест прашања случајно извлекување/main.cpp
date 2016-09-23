#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>


using namespace std;

char prasanje [7][255]={"prasanje 1:\n a)a\n b)b\n","prasanje 2:\n a)a\n b)b\n","prasanje 3:\na)a\n b)b\n","prasanje 4:\na)a\n b)b\n","prasanje 5:\na)a\n b)b\n","prasanje 6:\na)a\n b)b\n","prasanje 7:\na)a\n b)b\n"};
char resenie [7][255]={"a", "b", "a","a","b","b","a"};

int main()
{
    srand(time(NULL));
    int br_tocni=0;
    int br_gresni=0;
    int br_prasanja=0;
    cout<<"Test"<<endl;
    ofstream out_file("rezultati.txt");
    
while(true)
{
    int broj=rand()%6;
    if(!strlen(prasanje[broj]))
    {
                               while(!strlen(prasanje[broj]))
                               broj=rand()%6;
    }
    char odgovor [255];
    cout<<"prasanje: \n"<<prasanje[broj]<<endl;
    cin>>odgovor;
    cout<<endl;
    if(!strcmp(odgovor, resenie[broj]))
    {
                        br_tocni++;
                        br_prasanja++;
                        strcpy(prasanje[broj], "");
                        strcpy(resenie[broj],"");
                        cout<<odgovor<<", tocen odgovor!"<<endl;
    }
    else
    {
        br_gresni++;
        br_prasanja++;
        cout<<odgovor<<"Greshka. Tocen odgovor"<<resenie[broj]<<endl;
    }
    if(br_prasanja==5)
    {
                      cout<<"Kraj na testot, rezultatite se vo fajlot rezultati.txt. Ocena: ";
                      if(br_gresni==0)
                      {
                                      cout<<"10"<<endl;
                                      out_file<<"ocena: 10"<<endl<<"tocni: "<<br_tocni<<"  gresni "<<br_gresni<<endl;
                      }
                      else if(br_gresni==1)
                      {
                                      cout<<"8"<<endl;
                                      out_file<<"ocena: 8"<<endl<<"tocni: "<<br_tocni<<"  gresni "<<br_gresni<<endl;
                      }
                      else if(br_gresni==2)
                      {
                                      cout<<"6"<<endl;
                                      out_file<<"ocena: 6"<<endl<<"tocni: "<<br_tocni<<"  gresni "<<br_gresni<<endl;
                      }
                      else if(br_gresni>=3)
                      {
                                      cout<<"5"<<endl;
                                      out_file<<"ocena: 5"<<endl<<"tocni: "<<br_tocni<<"  gresni "<<br_gresni<<endl;
                      }
    }

    cout<<endl<<"Momentalen rezultat:"<<endl;
    cout<<"tocni: "<<br_tocni<<"  gresni "<<br_gresni<<endl;
} 
    system("PAUSE");
    return EXIT_SUCCESS;
}
