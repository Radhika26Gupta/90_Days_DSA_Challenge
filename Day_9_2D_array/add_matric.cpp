#include<iostream>
#include<climits>
using namespace std;

void input_matrix(int arr1[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
}
void output_matrix(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void sum(int arr1[3][3],int arr2[3][3],int arr3[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
}
int main()
{
    int arr1[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr3[3][3];
    sum(arr1,arr2,arr3);
    output_matrix(arr3);
}