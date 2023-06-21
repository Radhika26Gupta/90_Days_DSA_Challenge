#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int low,mid,high;
    low = mid =  0;
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
     high  = v.size()-1;
    while(mid<=high)
    {
        if(v[mid]==0) 
        {
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
        else if(v[mid]==1)
            mid++;
        else if(v[mid]==2)
        {
            swap(v[mid],v[high]);
            high--;
        }
    }
    for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}