class Solution {
    public:
      // Function to remove a loop in the linked list.
      void removeLoop(Node* head) {
          Node* s=head;
          Node* f=head;
          while(f && f->next)
          {
              s=s->next;
              f=f->next->next;
              if(s==f)
              {
                  break;
              }
          }
          if(f==NULL || f->next==NULL) return;
          s=head;
          while(s!=f)
          {
              s=s->next;
              f=f->next;
          }
          while(s->next!=f)
          {
              s=s->next;
          }
          s->next=NULL;
      }
  };

  //alternate
  class Solution {
    public:
      // Function to remove a loop in the linked list.
      void removeLoop(Node* head) {
          Node* s=head;
          Node* f=head;
          while(f && f->next)
          {
              s=s->next;
              f=f->next->next;
              if(s==f)
              {
                  break;
              }
          }
          if(f==NULL || f->next==NULL) return;
          s=f->next;
          int c=0;
          while(s!=f)
          {
              c++;
              s=s->next;
          }
          s=head;
          f=head;
          while(c--)
          {
              f=f->next;
          }
          while(s!=f)
          {
              s=s->next;
              f=f->next;
          }
          while(s->next!=f)
          {
              s=s->next;
          }
          s->next=NULL;