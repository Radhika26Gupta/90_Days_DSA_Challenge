#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;
    int arr[] = {88,45,32,11,100,87,90};
    for(int i = 0;i<8;i++)
    {
        if(arr[i]>max) {
            tmax = smax;
            smax = max;
            max = arr[i];
        }else if(arr[i]>smax&& arr[i]!=max)
        {
            tmax = smax;
            smax = arr[i];
        }else if(arr[i]>tmax&& arr[i]!=smax)
            tmax = arr[i];
    }
    cout<<max<<" "<<smax<<" "<<tmax;
}