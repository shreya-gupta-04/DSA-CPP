class Solution {
    public:
      Node* intersectPoint(Node* head1, Node* head2) {
          Node* curr1=head1;
          Node* curr2=head2;
          int c1=0,c2=0;
          while(curr1)
          {
              c1++;
              curr1=curr1->next;
          }
          while(curr2)
          {
              c2++;
              curr2=curr2->next;
          }
          curr1=head1;
          curr2=head2;
          while(c1>c2)
          {
              c1--;
              curr1=curr1->next;
          }
          while(c1<c2)
          {
              c2--;
              curr2=curr2->next;
          }
          while(curr1!=curr2)
          {
              curr1=curr1->next;
              curr2=curr2->next;
          }
          // if(!curr1) return -1;
          return curr1;
      }
  };
  //alternate solutin

  class Solution {
    public:
      Node* intersectPoint(Node* head1, Node* head2) {
          Node* curr1 = head1;
          
          // Traverse to the end of head1
          while (curr1->next) {
              curr1 = curr1->next;
          }
          
          // Create a temporary cycle by connecting last node to head1
          curr1->next = head1;
          
          Node* s = head2;
          Node* f = head2;
          
          // Detect cycle using slow and fast pointers
          while (f && f->next) {
              s = s->next;
              f = f->next->next;
              if (s == f) {
                  break;
              }
          }
          
          // If no cycle is detected
          if (!f || !f->next) {
              curr1->next = NULL; // IMPORTANT: break the cycle before returning
              return NULL;
          }
          
          // Reset slow to head2 and find the starting point of cycle
          s = head2;
          while (s != f) {
              s = s->next;
              f = f->next;
          }
          
          curr1->next = NULL; // IMPORTANT: break the cycle before returning
          
          return s;
      }
  };