#include <iostream>
using namespace std;

void sayDigits(int n, string digits[])
{
    if(n == 0) return;

    int digit = n%10;

    sayDigits(n/10,digits);
    cout << digits[digit] << " ";
}

int main()
{
    string digits[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin >> n;

    sayDigits(n,digits);

    return 0;
}