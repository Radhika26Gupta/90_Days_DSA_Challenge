#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int n =3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i==(n%2)) || (j==(n%2)))
                cout<<arr[i][j];
            else
                cout<<" ";
        }
        cout<<endl;
    }

}