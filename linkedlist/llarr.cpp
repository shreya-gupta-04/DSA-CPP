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
//inserting
Node* convert( vector<int> arr)
{
     Node* head=new Node(arr[0]);
     Node* mover=head;
     for(int i=1;i<arr.size();i++)
     {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp; // mover=mover->next
     }
     return head;
}
int main()
{
    vector<int> arr={12,5,7,8};
    Node* head=convert(arr);
    cout<< head->data;
}