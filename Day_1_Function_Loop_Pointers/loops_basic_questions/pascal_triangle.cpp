#include<iostream>
using namespace std;
/*int fact(int n)
{
    if(n==0)return 1;
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i,j;
    for( i=0;i<n;i++)
    {
        for( j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<"\n";
    }
}*/

//one more method by using the mathematical calculations
// formula nCr+1 = nCr(n-r)/r+1

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i,j;
    for( i=0;i<n;i++)
    {
        int curr = 1;
        for( j=0;j<=i;j++)
        {
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<"\n";
    }
}
