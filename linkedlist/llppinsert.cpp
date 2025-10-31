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
    Node* head;
    head=create(arr,0);
    //inserting at particular position the no. of steps we have to move forward will be pos-1
    int val,pos;
    cin>> val >> pos;
    Node* temp=head;
    pos--;
    while(pos--)
    {
        temp=temp->next;
    }
    Node* temp2=new Node(val);
    temp2->next=temp->next;
    temp->next=temp2;

    //print
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}