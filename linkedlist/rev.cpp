#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    *     int val;
    *     ListNode *next;
    *     ListNode() : val(0), next(nullptr) {}
    *     ListNode(int x) : val(x), next(nullptr) {}
    *     ListNode(int x, ListNode *next) : val(x), next(next) {}
    * };
   // Recursive: O(n)
   class Solution {
   public:
       ListNode* reverseList(ListNode* head) {
       if (head == NULL || head->next == NULL) {
           return head; // Base case
       }
   
       ListNode* newHead = reverseList(head->next);  // Reverse the rest of the list
       head->next->next = head;  // Reverse current node's pointer
       head->next = NULL;  // Set the old head's next to NULL
   
       return newHead; // Return the new head of the reversed list
   
       }
   }; 
   //reverse values
   class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* temp=head;
            vector<int> l;
            while(temp!=NULL)
            {

            }

        }
    };
    //reverse nodes
    
