#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s = "radhika";
    sort(s.begin(),s.end());
    cout<<s;
    string s1;
    getline(cin,s1);
    sort(s1.begin(),s1.end());
    cout<<s1;
}
