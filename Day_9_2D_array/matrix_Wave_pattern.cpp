#include<iostream>
using namespace std;
int main()
{
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=3;i>=0;i--)
    {
        if(i%2!=0)
        {
            for(int j=2;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}