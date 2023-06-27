#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    string x = to_string(n);
    cout<<"The number of digits are : "<<x.size();
}