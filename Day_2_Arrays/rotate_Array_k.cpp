#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&v)
{
	int i=0;
	int j=v.size()-1;
	while(i<=j)
	{
		swap(v[i],v[j]);
		i++;
		j--;
	}
}
void reverse_part(vector<int>&v,int i,int j)
{
	while(i<=j)
	{
		swap(v[i],v[j]);
		i++;
		j--;
	}
}
int main()
{
	vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    reverse_part(v,v.size()-k,v.size()-1);
    reverse_part(v,0,v.size()-k-1);
    reverse(v);
    for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
