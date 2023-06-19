#include<iostream>
using namespace std;
class student{
public:
    int roll;
    string name;
    float marks;
};
int main()
{
    student s1;
    s1.roll = 1;
    s1.marks = 90;
    s1.name = "Radhika";

    student s2;
    s2.roll = 2; 
    s2.marks = 97;
    s2.name = "Vanshika";

    cout<<s1.roll<<endl;
    cout<<s1.marks<<endl;
    cout<<s1.name<<endl;
    //now if change the entry of any student then it will overwrite
    s1.name = "pari";
     cout<<s1.name<<endl;
    cout<<s2.roll<<endl;
    cout<<s2.marks<<endl;
    cout<<s2.name<<endl;

    student s3;
    s3 = s1;
    cout<<s3.name<<endl;
    s3.name = "Sarthak";
    cout<<s1.name<<endl;

    //this method is only applicable when we are giving the values from starting in curly braces
    student s4 = {1,"Prachi",89};
    cout<<s4.roll<<endl;
    cout<<s4.marks<<endl;
    cout<<s4.name<<endl;
    
}