#include<iostream>
using namespace std;
class Student{
public:
    int roll;
    string name;
    float marks;
    Student()
    {

    }
    Student(int t,string n,float m)
    {
        roll = t;
        name = n;
        marks =m;
    }
    Student(int r,string n)
    {
        roll = r;
        name = n;
    }
};
int main()
{
    Student s(34,"Radha",45.6);
    cout<<s.roll<<endl;
    cout<<s.marks<<endl;
    cout<<s.name<<endl;
    Student s1(35,"Radhika");
    cout<<s1.roll<<endl;
    //cout<<s1.marks<<endl;
    cout<<s1.name<<endl;

    //jo ye cheej neeche likhi hai that will give an error bcoz 
    //when we are making the constructor it is mandatory to give the values in the form of
    //constructor only ya to phir hamesa default constructor

    /*Student s2;
    s2.roll = 2; 
    s2.marks = 97;
    s2.name = "Vanshika";*/

    //imp we can also change datatype value
}


