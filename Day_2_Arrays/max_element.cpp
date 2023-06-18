#include<iostream>
#include<climits>
using namespace std;
int max(int arr[],int n)
{
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m) m = arr[i];
    }
    return m;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum element is "<<max(arr,n);
}