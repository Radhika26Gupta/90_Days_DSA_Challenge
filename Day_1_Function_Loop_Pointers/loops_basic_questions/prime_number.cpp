#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n==1) cout<<"Neither prime nor composite!";
    else if(prime(n)) cout<<"Prime number";
    else cout<<"Not a prime number";
}