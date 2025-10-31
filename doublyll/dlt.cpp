#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

int main()
{
    Node* head=NULL;
    vector<int> a={2,3,4,5,6,7,8,9};
    //insert at start
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
   
    // //delete at start
    // if(head!=NULL)
    // {
    //     if(head->next==NULL)
    //     {
    //         delete head;
    //         head=NULL;
    //     }else{
    //         Node* temp=head;
    //         head=head->next;
    //         delete temp;
    //         head->prev=NULL;
    //     }
    // }
    // // delete at end
    // if(head!=NULL)
    // {
    //     if(head->next==NULL)
    //     {
    //         delete head;
    //         head=NULL;
    //     }else{
    //         Node* temp=head;
    //         while(temp->next!=NULL)
    //         {
    //             temp=temp->next;
    //         }
    //         temp->prev->next=NULL;
    //         delete temp;
    //     }
    // }
    // delete at particular position
    int p=3;
    //delete at start i.e pos=1
    if(p==1)
    {
        //pos=1 hai aur sief ek hi node hai
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else{// pos=1 hai lekin bahut sari nodes hai
            Node* temp=head;
            head=head->next;
            delete temp;
            head->prev=NULL;
        }
    }else{//pos!=1
        //dlt at end
        Node* curr=head;
        while(p--)
        {
            curr=curr->next;
        }
        if(curr->next==NULL)
        {
            curr->prev->next=NULL;
            delete curr;
        }else{
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
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