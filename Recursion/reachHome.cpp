#include <iostream>
using namespace std;

void reachHome(int src,int dest)
{
    if(src > dest) 
    {
        cout << "pahuch gaya" << endl;
        return;
    }

    cout << "take step : " << src << endl;
    reachHome(src+1,dest);
}

int main()
{
    int dest = 15;
    int src = 1;

    reachHome(src,dest);

    return 0;
}