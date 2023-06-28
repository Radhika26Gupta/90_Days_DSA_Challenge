#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the rows : ";
    cin>>r;
    cout<<"Enter the columns : ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            //if(i<j)
            swap(arr[j][i], arr[i][j]);
        } 
    }
 
    cout<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}