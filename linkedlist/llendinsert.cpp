#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
//inserting at end or normal creating ll
Node* end( vector<int> arr)
{
    Node* head=nullptr,*tail=nullptr;
    for(int i=0;i<arr.size();i++)
    {
        if(head==NULL)
        {
            head=new Node(arr[i]);
            tail=head;
        }
        else{
        //     Node* tail=head;
        //     while(tail->next!=NULL)
        //     {
        //         tail=tail->next;
        //     }
        //     tail->next=new Node(arr[i]);
        tail->next=new Node(arr[i]);
        tail=tail->next;
        }
    }
    return head;
}
Node* create(vector<int> arr,int idx)
{
      if(idx==arr.size())
        {
            return NULL;
        }
        Node* temp=new Node(arr[idx]);
        temp->next=create(arr,idx+1);
        return temp;
}
int main()
{
    vector<int> arr={12,5,7,8};
   // Node* head=end(arr);
    Node* head=create(arr,0);
   // Node* head=front(arr);
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}