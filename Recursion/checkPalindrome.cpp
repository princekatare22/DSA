#include <iostream>
using namespace std;

bool isPalindrome(string str,int i)
{
    if(i >= str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;
    return isPalindrome(str,i+1);
}

int main()
{
    string str;
    cin >> str;

    if(isPalindrome(str,0)) cout << "palindrome" << endl;
    else cout << "not palindrome" << endl;
    return 0;
}