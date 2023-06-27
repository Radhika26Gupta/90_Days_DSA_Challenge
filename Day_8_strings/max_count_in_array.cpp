#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,8,3,4,2,3,7,2,3};
    
    int max_count = 0;
    int fre = -1;
    int i,j;
    for( i=0;i<9;i++)
    {
        int count = 1;
        for(j=i+1;j<9;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count>max_count)
            {
                max_count = count; 
                fre = arr[j];
            }
                 
        } 
    }
    cout<<max_count;
    cout<<fre;
}