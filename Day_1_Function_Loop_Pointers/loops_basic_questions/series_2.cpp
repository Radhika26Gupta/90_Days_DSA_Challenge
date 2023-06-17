// sum of the series 1-2+3-4+5-6----n terms
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n%2==0) return -(n/2);
    else return -(n/2)+n;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The sum is : "<<sum(n);
}