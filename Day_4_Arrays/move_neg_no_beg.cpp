#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(-1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(-7);
	v.push_back(-5);
//	v.push_back(0);
//	v.push_back(0);
	v.push_back(11);
	v.push_back(6);
	
	int i=0;
	int j = v.size()-1;
	while(i<j)
	{
		if(v[i]<0)i++;
		if(v[j]>0)j--;
		//if(i>j) break;
		if(i<j&&v[i]>0&&v[j]<0)
		{
			swap(v[i],v[j]);
			i++;
			j--;
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
