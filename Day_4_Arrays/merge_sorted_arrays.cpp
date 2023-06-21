#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    v1.push_back(9);

    v2.push_back(2);
    v2.push_back(6);
    v2.push_back(8);   
    v2.push_back(10);
    vector<int>v3;
    int i = 0;
    int j = 0;
    int m = v1.size();
    int n = v2.size();
    while(i<m||j<n)
    {
        if(v1[i]<v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else 
        {
            v3.push_back(v2[j]);
            j++;
        }
            
    }
    for(int i=0;i<v3.size();i++)
	{
		cout<<v3[i]<<" ";
	}



}