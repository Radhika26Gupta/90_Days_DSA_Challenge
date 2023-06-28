#include<iostream>
using namespace std;
int main()
{
    int roll,marks;
    cout<<"Enter the roll no : ";
    cin>>roll;
    cout<<"Enter the marks : ";
    cin>>marks;
    int arr[roll][marks];
    for(int i=0;i<roll;i++)
    {
        for(int j=0;j<marks;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<roll;i++)
    {
        for(int j=0;j<marks;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}