#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cout<<"Enter a string : ";
    cin>>n;
    int count = 0;
    for(int i = 0;i<n.size();i++)
    {
        if(n.size()==1)break;
        if(n.size()==2)
        {
            if(n[i]!=n[i+1])
            {
                count = 1;
                break;
            }
        }
        if(i==0)
        {
            if(n[i]!=n[i+1])count++;
        }
        else if(i==n.size()-1)
        {
            if(n[i]!=n[i-1])count++;
        }
        else if(n[i]!=n[i-1]&&n[i]!=n[i+1])
            count++;
    }
    cout<<count;
}