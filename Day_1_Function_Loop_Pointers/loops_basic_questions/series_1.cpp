// print series such as 100,97,94------upto n terms

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
    a = 100;
    d = -3;
    cout<<"Enter the number of terms : ";
    cin>>n;
    ap(a,n,d);
}