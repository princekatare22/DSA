#include <iostream>
using namespace std;

int power(int n,int m)
{
    if(m == 0) return 1;

    if(m%2 == 0) return power(n,m/2) * power(n,m/2);
    else return n*power(n,m/2) * power(n,m/2);
}

int main()
{
    int n,m;
    cin >> n >> m;
    cout << power(n,m) << endl;
    return 0;
}