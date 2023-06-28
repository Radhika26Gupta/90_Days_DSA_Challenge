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
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]>max)
            {
                smax = max;
                max = arr[i][j];
            }
            else if(smax<arr[i][j]&&arr[i][j]<max)
            smax= arr[i][j];
        }
    }
    cout<<"The maximum element is " <<max;
    cout<<"\nThe second maximum element is " <<smax;
}