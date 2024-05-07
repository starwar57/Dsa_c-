//remove duplicate elements from a sorted linked list
#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
          int data;
          node* next;
          node(int x)
          {
            data=x;
            next=NULL;
          }
};
void removeduplicate(node* head)
{
  node* current=head;
  node* next_next;
  if(current==NULL)
  return;
  while(current->next!=NULL)
  {
    if(current->data==current->next->data)
    {
      next_next=current->next->next;
      free(current->next);
      current->next=next_next;
    }
    else
    {
      current=current->next;
    }
  }
}



