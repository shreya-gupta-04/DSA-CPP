#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};
Node* create(vector<int> arr,int idx)
{
    if(idx==arr.size())
    {
        return NULL;
    }
    Node*temp=new Node(arr[idx]);
    temp->next=create(arr,idx+1);
    return temp;
}
int main()
{
    Node* head=nullptr;
    vector<int> arr={2,4,6,7,1};

    head=create(arr,0);
    //delete at front
    if(head!=NULL)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    // dlt at end
    if(head!=NULL)
    {
        if(head->next==NULL)
        {
            Node* temp=head;
            delete temp;
            head=NULL;
        }
        else{
            Node* curr=head;
            Node* prev=NULL;
            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            prev->next=NULL;
            delete curr;
        }
    }
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}