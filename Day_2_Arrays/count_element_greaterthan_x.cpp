#include<iostream>
using namespace std;
int count(int arr[],int target,int n)
{ 
    int c = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>target)
        {
            c+=1;
        }
    }
    return c;
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
    int index = count(arr,target,n);
    cout<<index;
}