#include<iostream>
using namespace std;
int count_digit(int n)
{
    int count=0;
    if(n==0)return 1;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The number of digits : "<<count_digit(n);
}