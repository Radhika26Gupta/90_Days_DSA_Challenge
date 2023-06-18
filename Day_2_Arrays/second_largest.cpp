#include<iostream>
#include<climits>
using namespace std;
int second_max(int arr[],int n)
{
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m) m = arr[i];
    }
    int sm = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>sm && arr[i]!=m)
            sm = arr[i];
    }
    return sm;
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
    cout<<"The second maximum element is "<<second_max(arr,n);
}