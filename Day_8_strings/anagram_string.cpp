#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    string t;
    cout<<"Enter the first string : ";
    cin>>s;
    cout<<"Enter the anagram string : ";
    cin>>t;
    string s1;
    string t1;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());    
    //cout<<s<<" "<<t;
    if(s==t)
    cout<<"yes";
    else cout<<"no";
}