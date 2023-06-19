#include<iostream>
using namespace std;
class Student{
public:
    int roll;
    string name;
    float marks;
    Student(int t,string n,float m)
    {
        roll = t;
        name = n;
        marks =m;
    }
};
int main()
{
    Student s(34,"Radha",45.6);
    cout<<s.roll<<endl;
    cout<<s.marks<<endl;
    cout<<s.name<<endl;
}