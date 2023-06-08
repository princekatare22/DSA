#include <iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n == 1|| n == 0) return 1;

    //recursive function
    int smallerProblem = factorial(n-1);
    int biggerProblem = n*smallerProblem;

    return biggerProblem;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}