#include <iostream>
using namespace std;

//Head recursion
void printCount(int n)
{
    //base condition
    if(n == 0) return;

    //recursive function
    printCount(n-1);
    cout << n << " ";
}

//Tail recursion
void revPrintCount(int n)
{
    //base condition
    if(n == 0) return;

    //recursive function
    cout << n << " ";
    revPrintCount(n-1);
}

int main()
{
    int n;
    cin >> n;
    printCount(n);
    cout << endl;
    revPrintCount(n);
    return 0;
}