#include <iostream>
using namespace std;

int binarySearch(int *arr,int start,int end,int target)
{
    if(start > end) return -1;
    int mid = start + (end-start)/2;
    if(arr[mid] == target) return mid;

    if(arr[mid] < target) return binarySearch(arr,mid+1,end,target);
    if(arr[mid] > target) return binarySearch(arr,start,mid-1,target);
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
    cout << binarySearch(arr,0,n-1,target) << endl;
    return 0;
}