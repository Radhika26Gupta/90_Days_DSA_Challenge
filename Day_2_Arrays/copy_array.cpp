#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    vector<int>v1(v.size());
    for(int i=0;i<v1.size();i++)
    {
    	v1[i] = v[v.size()-i-1];
	}
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	
}
