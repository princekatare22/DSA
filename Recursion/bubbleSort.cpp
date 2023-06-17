#include <iostream>
using namespace std;


void bubbleSort(int *arr,int n)
{
    if(n == 0 || n == 1) return;
    if(arr[0] > arr[1]) swap(arr[0],arr[1]);
    sortElement(arr,n);
    bubbleSort(arr+1,n-1);
}


void sortElement(int *arr,int n)
{
    if(n == 0 || n == 1) return;
    if(arr[0] > arr[1]) swap(arr[0],arr[1]);
    sortElement(arr+1,n-1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    bubbleSort(arr,n);

    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}