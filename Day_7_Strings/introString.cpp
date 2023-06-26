#include<iostream>
using namespace std;
int main()
{
    char ch = 'a';
    char str[5] = {'a','b','c','d','e'};
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    char str1[5] = {'a','b','c','d','e'};
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl<<(int)str1[5];
    cout<<endl<<str;
}
