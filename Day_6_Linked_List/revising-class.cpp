#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float marks;

    // This is without using this keyword becoz we have taken different name arguments
    /*Student(string n,int r,float m)
    {
        name = n;
        roll = r;
        marks = m;
    }*/

    // here we are taking similar name so we will use this keyword 
    Student(string name,int roll,float marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

/*void change(Student s)
{
    s.name = "Sajal";
}*/

//if we want to change the name we have to send it by the reference

/*void change(Student &s)
{
    s.name = "Sajal";
}*/

void change(Student* s)
{
    s->name = "prachi";
}
int main()
{
    //This is declaration and initialisation
    Student s("radhika",37,99);

    //we can also store the address of student object in the pointer variable

    Student *ptr = &s;

    /*(*ptr).name = "vanshika";
    cout<<endl<<s.name;*/

    //we can also write it as to change

    ptr->name = "pari";

    cout<<s.name<<" "<<s.roll<<" "<<s.marks;
    //change(s);

    //Here the name will not be changed bcoz it is passed through call by value default
    cout<<endl<<s.name;

    //Here the another method is to send the address of Student object to the function

    Student s1("Sarthak",67,98);
    change(&s1);
    cout<<endl<<s1.name<<" "<<s1.roll<<" "<<s1.marks;

    //Important way of doing the things in linked list we are just creating one box for 
    //pointer and storing the object into it

    Student *s2  = new Student("meethu",34,99);
    cout<<endl<<s2->name<<" "<<s2->roll<<" "<<s2->marks;

}