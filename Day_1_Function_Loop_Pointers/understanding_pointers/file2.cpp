#include<iostream>
using namespace std;
int main()
{
    int x = 4;
    int *p = &x;
    // *p = *p+1;
    // cout<<*p<<endl;
    // p = p+1;
    // cout<<*p<<endl;
    // (*p)++;
    // cout<<*p<<endl;
    int y = ++(*p);
    cout<<x<<" "<<y;

    //output will be 5 5

    int z = (*p)++;
    cout<<x<<" "<<y<<endl;

    //output will be 6 5 pehle valuenz ko dedo uske bad increment karo

    int *ptr = NULL;
    int *ptr1 = 0;
    int *ptr2 = '\0';
    cout<<ptr<<" "<<&ptr<<" "<<ptr1<<" "<<&ptr1<<" "<<ptr2;
}