#include<iostream>
using namespace std;
bool check_palindrome(int arr[],int n)
{
    int i = 0;
    int j = n-1;
    bool flag  = true;
    for(int k = 0;k<n/2;k++)
    {
        if(arr[i] != arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;      
    }
    return flag;
}
int main()
{
    int arr[] = {1,2,3,3,6,1};
    cout<<check_palindrome(arr,6);
}