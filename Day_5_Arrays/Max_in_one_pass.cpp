#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int max = INT_MIN;
    int smax = INT_MIN;
    int arr[] = {88,45,32,11,100,87,90};
    for(int i = 0;i<7;i++)
    {
        if(arr[i]>max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>smax)
        {
            smax = arr[i];
        }
    }
    cout<<max<<" "<<smax;

}