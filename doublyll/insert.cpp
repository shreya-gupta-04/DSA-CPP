#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        next=prev=NULL;
    }
};

int main()
{
    Node* head=NULL;
    vector<int> a={2,3,4,5,6,7,8,9};
    //insert at start
    if(head==NULL) 
    {
        head=new Node(5);
    }else{
    Node* temp=new Node(5);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    

    //arr to dll
    Node* tail=NULL;
    for(int i=0;i<a.size();i++)
    {
        if(head==NULL)
        {
            head=new Node(a[i]);
            tail=head;
        }else{
            Node* temp=new Node(a[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }
    
    //insert at end
    Node* curr=head;
    if(head==NULL)
    {
        head=new Node(8);
    }
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    Node* temp=new Node(8);
    curr->next=temp;
    temp->prev=curr;

    // insert at given pos
    int pos=2;
    if(pos==0)
    {
        if(head==NULL)
        {
            head= new Node(16);
        }else{
            Node* t=new Node(16);
            t->next=head;
            head->prev=t;
            head=t;
        }
    }else{
        //node per jana hoga jha insert krana hai
        Node* curr=head;
        while(--pos)
        {
            curr=curr->next;
        }
        //insert at end
        if(curr->next==NULL)
        {
            Node* temp=new Node(16);
            temp->prev=curr;
            curr->next=temp;
        }// insert at middle
        else{
             Node* t=new Node(10);
             t->next=curr->next;
             curr->next=t;
             t->prev=curr;
             t->next->prev=t;
        }
    }
    
    //print
Node* trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}