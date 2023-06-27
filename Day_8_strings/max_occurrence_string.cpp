#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    vector<int>freq(26,0);
    for(int i = 0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int max = INT_MIN;
    int i;
    for( i=0;i<26;i++)
    {
        if(freq[i]>max)
        {
            max = freq[i];   
        }
    }  
    for(int j = 0;j<26;j++)
    {
        int ascii = j+97;
        if(freq[j]==max)
        {
            cout<<(char)ascii<<" ";
            cout<<max<<endl;
        }
    }
}