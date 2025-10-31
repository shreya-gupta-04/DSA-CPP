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
//insert at front or reverse
Node* front(vector<int> arr)
{
    Node* head = nullptr;  
    // cout<< head->data<<" ";
    // cout<< head->next<<" ";
   // int arr[] = {2, 4, 6, 8, 10};

    // Insert 
    for (int i = 0; i < 5; i++) {
        // ll exist krti hai ya nhi
        if (head == NULL) {
            head = new Node(arr[i]);
        }
        // agar krti hai toh
        else {
            Node* temp = new Node(arr[i]);
            temp->next = head;
            head = temp;  
        }
    }
    return head;
}
Node* reverse(vector<int> arr,int idx,Node* prev)
{
    if(idx==arr.size())
    {
        return prev;
    }
    Node* temp=new Node(arr[idx]);
    temp->next=prev;
    return reverse(arr,idx+1,temp);
}
int main()
{
    vector<int> arr={12,5,7,8};
   //Node* head=front(arr);
    Node* head=reverse(arr,0,NULL);
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}