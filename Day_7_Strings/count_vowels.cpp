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
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			c++;
	}
	cout<<"The number of vowels is "<<c;
}
