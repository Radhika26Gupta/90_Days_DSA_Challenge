#include<iostream>
using namespace std;
void first(int n,int*f,int *l)
{
    *l = n%10;
    while(n>9)
    {
        n/=10;
    }
    *f = n;
}
int main()
{
    int fd,ld;
    int *f = &fd;
    int *l = &ld;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    first(n,f,l);
    cout<<*f<<" "<<*l;
}