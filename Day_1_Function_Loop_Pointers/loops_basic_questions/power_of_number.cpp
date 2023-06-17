#include<iostream>
using namespace std;
float power(int b,int e)
{
    float ans=1;
    bool flag = true;
    if(e<0)
    {
        flag = false;
        e = -e;
    }
    for(int i=1;i<=e;i++)
    {
       ans*=b;
    }
    if(flag==false)
    {
        ans = 1/float(ans);
        e = -e;
    }
    return ans;
}
int main()
{
    int base,exponent;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the Exponent : ";
    cin>>exponent;
    //cout<<1/float(8);
    if(base==0&&exponent==0) cout<<"Undefined number";
    else if(base==0&&exponent)return 0;
    else if(base&&exponent==0)return 1;
    else cout<<power(base,exponent);
}