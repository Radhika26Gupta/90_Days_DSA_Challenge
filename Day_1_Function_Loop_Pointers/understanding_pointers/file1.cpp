#include<iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 4;
    int *p1 = &a;
    int *p2 = &b;
    cout<<p1<<" "<<p2<<endl;
    cout<<&a<<" "<<&b<<endl;
    cout<<*p1<<" "<<*p2<<endl;
    int m,n;
    int *m1 = &m;
    int *m2 = &n;
    cin>>m>>n;
    cin>>*m1>>*m2;
    cout<<m<<" "<<n;
}