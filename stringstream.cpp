#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string str = "dont compare yourself with others";
    stringstream ss(str);
    string temp;
    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
}