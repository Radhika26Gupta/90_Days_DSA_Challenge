#include<iostream>
using namespace std;
void ap(int a,int n,int d)
{
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a+=d;
    }
}
int main()
{
    int a,n,d;
    cout<<"Enter first term : ";
    cin>>a;
    cout<<"Enter the difference : ";
    cin>>d;
    cout<<"Enter the number of terms : ";
    cin>>n;
    ap(a,n,d);
}