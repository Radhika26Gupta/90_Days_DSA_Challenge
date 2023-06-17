#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    if(b%min(a,b)==0&&a%min(a,b)==0) cout<<min(a,b);
    else
    {
        for(int i = min(a,b);i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                cout<<i;
                break;
            }
        }
    }

}