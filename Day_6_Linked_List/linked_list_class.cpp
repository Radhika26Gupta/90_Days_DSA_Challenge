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
class LinkedList
{
public:
    Node*head;
    Node*tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node* temp = new Node(val);
        if(size==0)head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBeg(int val)
    {
        Node* temp = new Node(val);
        if(size==0)head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtPos(int idx,int val)
    {
        //tc O(n)
        Node*temp;
        temp = head;
        //Node*pos;
        if(idx<0||idx>size)cout<<"Error";
        else if(idx==0)
        {
            insertAtBeg(val);
        }
        else if(idx==size)
        {
            insertAtEnd(val);
        }
        else
        {
            Node*loc =  new Node(val);
            int count = 0;
            while(count!=idx-1)
            {
                temp = temp->next;
                count++;
            }
            /*pos = temp->next;
            temp->next = loc;
            loc->next = pos;*/
            loc->next = temp->next;
            temp->next = loc;
            size++;
        }
    }
    int getValue(int idx)
    {
        //tc = O(n)
        if(idx<0||idx>=size)cout<<"No value found";
        else if(idx==0) return head->val;
        else if(idx==size-1)return tail->val;
        else
        {
            int count=0;
            Node*temp = head;
            while(count!=idx)
            {
                temp=temp->next;
                count++;
            }
            return temp->val;
        }
    }
    void deleteAtHead()
    {
        if(size==0)cout<<"List is empty";
        else if(size==1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            Node*temp;
            temp = head;
            head = temp->next;
            delete(temp);
            size--;
        }
    }
    void deleteAtTail()
    {
        if(size==0)cout<<"List is empty";
        else if(size==1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            Node*temp = head;
            //while((temp->next)->next!=NULL)OR
            while(temp->next!=tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIndex(int idx)
    {
        if(idx<0||idx>=size)cout<<"No value found";
        else if(idx==0)deleteAtHead();
        else if(idx==size-1)deleteAtTail();
        else
        {
            Node*temp = head;
            int count= 0;
            while(count!=idx-1)
            {
                temp = temp->next;
                count++;
            }
            temp->next = (temp->next)->next;
            size--;
        }
    }
    void display_()
    {
        Node*temp = head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    } 
 };
 int main()
 {
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtBeg(5);
    ll.insertAtBeg(15);
    ll.insertAtEnd(80);
    ll.insertAtPos(2,88);
    ll.insertAtPos(3,23);
    ll.insertAtPos(7,99);
    ll.insertAtEnd(100);
    //ll.deleteAtHead();
    //ll.deleteAtHead();
    cout<<endl;
    //ll.display_();
    //ll.deleteAtTail();
    //cout<<endl;
    ll.display_();
    //ll.deleteAtTail();
    //cout<<endl;
    //ll.display_();
    /*ll.deleteAtIndex(2);
    cout<<endl;
    ll.display_();*/
    ll.deleteAtIndex(3);
    cout<<endl;
    ll.display_();
    ll.deleteAtIndex(6);
    cout<<endl;
    ll.display_();



 }