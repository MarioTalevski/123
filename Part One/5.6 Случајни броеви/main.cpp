#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int x, y;
    float random;
    cout<<"Kolku slucajni broevi sakash da se ispishat?"<<endl;
    cin>>y;
    srand(time(NULL));
    rand();
    for (x=0; x<y; x++)
    {
        random=static_cast<float>(rand())/RAND_MAX;
        cout<<random;
        cout<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
