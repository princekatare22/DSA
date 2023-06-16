#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target)
{
    if(size == 0) return false;
    if(arr[0] == target) return true;

    return linearSearch(arr+1,size-1,target);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;  

    if(linearSearch(arr,n,target)) cout << "present" << endl;
    else cout << "not present" << endl;

    return 0;
}