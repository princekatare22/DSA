#include <iostream>
using namespace std;

void reverse(string &str,int i)
{
    if(i >= str.size()/2) return;
    swap(str[i],str[str.size()-i-1]);
    reverse(str,i+1);
}

int main()
{
    string str;
    cin >> str;

    reverse(str, 0);
    cout << str << endl;
    return 0;
}