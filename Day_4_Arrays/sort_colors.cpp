#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int c1,c2,c3;
    c1 = c2 = c3 = 0;
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)c1++;
        if(v[i]==1)c2++;
        if(v[i]==2)c3++;
    }
    //zcout<<c1<<" "<<c2<<" "<<c3<<endl;
    for(int i=0;i<v.size();i++) 
    {
        if(i<c1)v[i]=0;
        else if(i<c1+c2)v[i]=1;
        else if(i<c1+c2+c3)v[i]=2;
    }
    for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}