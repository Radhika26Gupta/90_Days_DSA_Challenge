#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]; //it will give garbage value

    //arr[0][0] = 4;
    cout<<"\n"<<arr[0][0];

    int arr1[][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}