#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}