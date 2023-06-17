#include<iostream>
using namespace std;
void gp(int a,int n,int r)
{
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a*=r;
    }
}
int main()
{
    int a,n,r;
    cout<<"Enter first term : ";
    cin>>a;
    cout<<"Enter the ratio : ";
    cin>>r;
    cout<<"Enter the number of terms : ";
    cin>>n;
    gp(a,n,r);
}