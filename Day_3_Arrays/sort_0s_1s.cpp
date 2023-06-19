#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	int c = 0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==0)c++;
	}
//	cout<<c;
	for(int i=0;i<v.size();i++)
	{
		if(i<c)v[i]=0;
		else v[i]=1;
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
