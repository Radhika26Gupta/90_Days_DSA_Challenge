#include<iostream>
using namespace std;
int reverse(int n)
{
    int ans,rem;
    ans = rem = 0;
    while(n>0)
    {
        ans = ans*10;
        rem = n%10;
        ans = ans + rem;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The reverse of a number is : "<<reverse(n);
}