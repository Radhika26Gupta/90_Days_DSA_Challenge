#include<iostream>
using namespace std;
bool array(int arr[],int n)
{
    bool flag = false;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            flag = true;
            break;
        }
    }
    return flag;
}
int main()
{
    int arr[] = {90 ,100, 200, 400, 500, 600, 700 ,900};
    cout<<array(arr,8);
}