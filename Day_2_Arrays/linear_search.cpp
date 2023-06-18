#include<iostream>
using namespace std;
int linear_search(int arr[],int target,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)return i;
    }
    return -1;
}
int main()
{
    int n,target;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target : ";
    cin>>target;
    int index = linear_search(arr,target,n);
    if(index==-1) cout<<"Element not found!";
    else cout<<"Element found at index "<<index;
}