#include<iostream>
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

    int max_sum = 0;
    int row;
    for(int i=0;i<r;i++)
    {
        int sum = 0;
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>max_sum)
        {
            max_sum = sum;
            row = i;
        }
            
    }
    cout<<max_sum<<"\n";
    cout<<"The row is : "<<row;
}