#include <iostream>
using namespace std;

int findSum(int arr[],int size)
{
    if(size == 0) return 0;
    int sum = arr[0] + findSum(arr+1,size-1);
    return sum;
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

    cout << findSum(arr,n) << endl;
    return 0;
}