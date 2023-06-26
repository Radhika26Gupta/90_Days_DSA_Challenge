#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s = "Radhika is good girl";
	//calculate size
	//cout<<s.size();
	//cout<<s.length();
	
	string s1 = "abcd";
	//cout<<endl<<s1;
	s1.push_back('e');
	//cout<<endl<<s1;	
	s1.push_back('f');
	s1.push_back('g');
	s1.push_back('h');
	//cout<<endl<<s1;	
	string str =  "Radhika";
	str.pop_back();
	//cout<<endl<<s1;	
	string s3 = "radhika";
	string s2 = "efgh";
	s2 = s3+s2;
	//cout<<endl<<s2;

	//we can also append like this

	s3 = "gupta" + s3;
	//cout<<endl<<s3;

	s3 = "1234" + s3;
	//cout<<endl<<s3;
	//cout<<s3;
	reverse(s3.begin(), s3.end());
	//cout<<endl<<s3;

	string newstr = "RadhikaG";
	//reverse(newstr.begin(),newstr.begin()+s.length()/2);
	// int n = (newstr.size())/2;
	// cout<<n<<endl;
	reverse(newstr.begin(),newstr.begin()+newstr.size()/2);
	cout<<newstr;
	
}
