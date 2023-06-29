#include<iostream>
using namespace std;
void input_matrix(int arr[10][10],int r,int c)
{
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void output_matrix(int arr[10][10],int r,int c)
{
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void multiplication(int arr1[10][10],int arr2[10][10],int arr3[10][10],int r1,int c1,int r2,int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            arr3[i][j] = {0};
            for(int k = 0;k<c1;k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}
int main()
{
    int r1,c1,r2,c2;
    int arr1[10][10];int arr2[10][10];int arr3[10][10];
    cout<<"Enter the value of r1 : ";
    cin>>r1;
    cout<<"Enter the value of c1 : ";
    cin>>c1;
    cout<<"Enter the value of r2 : ";
    cin>>r2;
    cout<<"Enter the value of c2 : ";
    cin>>c2;
    if(c1==r2)
    {
    cout<<"\nEnter the matrix 1 : ";
    input_matrix(arr1,r1,c1);
    cout<<"\nEnter the matrix 2 : ";
    input_matrix(arr2,r2,c2);
    cout<<"\nThe matrix 1 is : \n";
    output_matrix(arr1,r1,c1);
    cout<<"\nThe matrix 2 is : \n";
    output_matrix(arr2,r1,c1);
    cout<<"\nThe multiplication is : \n";
    multiplication(arr1,arr2,arr3,r1,c1,r2,c2);
    output_matrix(arr3,r1,c2);

    }
    else cout<<"Matrix multiplication is not possible !";
    
}