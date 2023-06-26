#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int c = 0;
	cout<<"Enter the string  : ";
	getline(cin,s);
	for(int i =0;s[i]!='\0';i++)
	{
		if(i%2==0)s[i] = 'a';
		
	}
	cout<<"The updated string is "<<s;
}
