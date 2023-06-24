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
void display(Node* head)
{
     Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int count_nodes(Node* head)
{
    Node *temp = head;
    int c = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
    
}
void display_rec(Node* head)
{
     Node *temp = head;
    if(temp==NULL)return;
    else{
        cout<<temp->val<<" ";
        display_rec(temp->next);
    }
}
void display_reverse(Node* head)
{
     Node *temp = head;
    if(temp==NULL)return;
    else{
        cout<<endl;
        display_rec(temp->next);
        cout<<temp->val<<" ";
    }
}
int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
   display(a);
   display_rec(a);
   cout<<"The number of nodes in linked list : "<<count_nodes(a);

}