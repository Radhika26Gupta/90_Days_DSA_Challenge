#include<iostream>
using namespace std;
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
    int sum = 1;
     for(int i=0;i<n;i++)
     {
        sum*=arr[i];
     }
     cout<<"The sum is : "<<sum;
}