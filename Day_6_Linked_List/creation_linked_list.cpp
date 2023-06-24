#include<iostream>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // cout<<a.next<<endl;
    // cout<<b.next<<endl;
    
    cout<<a.val<<" "<<b.val<<" "<<c.val<<" "<<d.val;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // d.next = NULL;

    //Now printing the values using pointers

    cout<<endl<<(*(a.next)).val<<endl;
    //Another way to access 

    //printing all values of a linked list using a
    cout<<"values";
    cout<<a.val<<endl;
    cout<<(a.next)->val<<endl;
    cout<<((a.next)->next)->val<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;

    /*Hey dont get confused in this dot symbol just try to solve the things using 
    the arrow operator and make a new file and do the things All the best for linked list*/
    
}