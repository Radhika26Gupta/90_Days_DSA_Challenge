#include<iostream>
using namespace std;
int main()
{
    string s = "abcdefgh";
    cout<<s.substr(0);
    cout<<endl<<s.substr(1);
    cout<<endl<<s.substr(2);
    cout<<endl<<s.substr(3);

    cout<<endl<<s.substr(2,3);

    int n = s.size()/2;
    cout<<endl<<s.substr(n);

    int x = 12345;
    string m = to_string(x);
    cout<<"\n"<<m;

}


